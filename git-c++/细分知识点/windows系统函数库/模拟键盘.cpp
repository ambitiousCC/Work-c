#include <iostream>
#include <windows.h>
#include <cstdio>
#include <ctime>

using namespace std;

int main()
{
	HWND windows;
	windows = FindWindow(NULL,"1.txt - 记事本");
	SendMessage(windows,WM_CLOSE,0,0);//关闭
	return 0;
}
