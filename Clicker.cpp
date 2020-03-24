#include "Clicker.h"
#include<windows.h>
#include<iostream>

using namespace std;

void Clicker::Click(int a,long b)
{
	if (a == 1)
	{
		mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		Sleep(b);
	}
	if (a == 2)
	{
		mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
		Sleep(b);
	}
}

void Clicker::Output()
{
	cout << "-----------------------------------MouseClicker V1.1-----------------------------------" << endl;
	cout << "                     Thanks for Using this Program        Made by:Yihan Wang" << endl;
}