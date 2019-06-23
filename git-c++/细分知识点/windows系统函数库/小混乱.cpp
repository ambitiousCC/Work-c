#include <iostream>
#include <cstdio>
#include <ctime>
#include <windows.h>
using namespace std;
int main()
{
	POINT mouse;
	HWND window;
	srand(time(0));

	while(1)
	{
		SetCursorPos(rand()%1920,1080);
		for(int i=0;i<100;i++)
		{
			GetCursorPos(&mouse);
			window = WindowFromPoint(mouse);
			for(int j=0;j<100;j++)
			{
				ShowWindow(window,SW_HIDE);//隐藏
				Sleep(200);
				ShowWindow(window,SW_MAXIMIZE);//最大化
				Sleep(200);
				ShowWindow(window,SW_MINIMIZE);//最小化
				Sleep(200);
				ShowWindow(window,SW_RESTORE);//还原
				Sleep(200);
			}
		}
	}

	return 0;
}