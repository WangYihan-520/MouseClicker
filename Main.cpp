#include<iostream>
#include<windows.h>
#include "Clicker.h"

int res,a;
char s;

using namespace std;

int main()
{
    Clicker z;
    z.Output();
    cout << "Which mouse button do you want to click:(LEFT:1,RIGHT:2)?";
    cin >> a;
    cout << endl;
    cout << "Please enter the frequency of hits per second:";
    cin >> res;
    cout << endl;
    res = 1000 / res;
    cout << "Press Space button to run the program......" << endl;
    while (1)
    {
        if (GetAsyncKeyState(VK_SPACE))
        {
            cout << "The program is running......" << endl;
            while (1)
            {
                z.Click(a, res);
                if (GetAsyncKeyState(VK_ESCAPE)) break;
            }
            Sleep(500);
            cout << "The Program has paused" << endl;
            cout << "DO you want to exit?(Y/N):" << endl;
            cin >> s;
            if (s == 'Y' || s == 'y') return 0;
            if (s == 'N' || s == 'n')
            {
                system("cls");
                z.Output();
                cout << "Press Space Button to Continue!" << endl;
                continue;
            }
        }
    }
    return 0;
}