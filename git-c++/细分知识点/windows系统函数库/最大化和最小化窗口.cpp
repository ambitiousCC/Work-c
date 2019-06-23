#include <windows.h>
#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;
int main()
{
	HWND window;
	window = FindWindow(NULL,"Debug");
	int i = 10;
	while(i--)
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

	return 0;
}