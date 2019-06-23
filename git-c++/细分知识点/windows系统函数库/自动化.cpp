#include <iostream>
#include <windows.h>
#include <cstdio>
#include <ctime>
#include <string>
using namespace std;
int main()
{
	char str[] = "sadfas";
	HWND window;
	window = FindWindow(NULL,"1.txt - ¼ÇÊÂ±¾");
	for(int i=0;i<234;i++)
	{
		ShowWindow(window,SW_HIDE);
		SendMessage(window,WM_CHAR,WPARAM('a'),0);
		ShowWindow(window,SW_RESTORE);
	}

	return 0;
}