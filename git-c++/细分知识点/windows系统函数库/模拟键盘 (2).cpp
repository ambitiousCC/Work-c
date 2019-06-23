#include <iostream>
#include <windows.h>
#include <cstdio>
#include <ctime>
using namespace std;
int main()
{
	POINT mouse;//获取鼠标的位置
	HWND window;
	while(1)
	{
		GetCursorPos(&mouse);//获取鼠标的位置
		window = WindowFromPoint(mouse);//获取鼠标位置的句柄
		SendMessage(window,WM_CHAR,WPARAM('a'),0);//模拟键盘
		Sleep(200);
	}
	return 0;
}