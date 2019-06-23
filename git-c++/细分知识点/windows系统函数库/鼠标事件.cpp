#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <windows.h>
#include <ctime>

using namespace std;
int main()
{
	srand(time(0));
	POINT mouse;
	HWND window;

	int fi = 100;
	while(fi--)
	{
		int x = rand()%1920;
		int y = rand()%1080;
		SetCursorPos(x,y);
		Sleep(1);
		break;
	}

	GetCursorPos(&mouse);
	window = WindowFromPoint(mouse);
	int i = 0;
	while(true)
	{
		i++;
		ShowWindow(window,SW_HIDE);//隐藏
		Sleep(200);
		ShowWindow(window,SW_MAXIMIZE);//最大化
		Sleep(200);
		ShowWindow(window,SW_MINIMIZE);//最小化
		Sleep(200);
		ShowWindow(window,SW_RESTORE);//还原
		Sleep(200);
		if(i==2)
			break;
	}

	ShowWindow(window,SW_HIDE);//隐藏
	Sleep(10);
	ShowWindow(window,SW_MINIMIZE);//最小化
	i=0;

	while(true)
	{
		i++;
		int x = rand()%1920;
		int y = rand()%1080;
		SetCursorPos(x,y);
		Sleep(1);
		cout<<"I love you for "<<i<<" times"<<endl;
		if(i==3000)
			break;
	}

	i=0;
	while(true)
	{
		i++;
		ShowWindow(window,SW_HIDE);//隐藏
		Sleep(200);
		ShowWindow(window,SW_MAXIMIZE);//最大化
		Sleep(200);
		ShowWindow(window,SW_MINIMIZE);//最小化
		Sleep(200);
		ShowWindow(window,SW_RESTORE);//还原
		Sleep(200);
		if(i==2)
			break;
	}

	cout<<"but ... I need nothing"<<endl;

	return 0;
}
