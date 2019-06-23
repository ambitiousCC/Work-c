#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <windows.h>
#include <winable.h>
#include <ctime>

using namespace std;
int main()
{
	srand(time(0));
	POINT mouse;
	HWND window;

	window = FindWindow(NULL,"小东西");
	int i = 20;
	while(i--)
	{
		ShowWindow(window,SW_HIDE);//隐藏
		ShowWindow(window,SW_MAXIMIZE);//最大化
		ShowWindow(window,SW_MINIMIZE);//最小化
		ShowWindow(window,SW_RESTORE);//还原
		Sleep(1);
		cout<<"程序载入中... ";
	}
	cout<<"程序成功加载!"<<endl;
	
	while(true)
	{
		cout<<"检查计算机与服务器连接..."<<"("<<i<<"%)"<<endl;
		i++;
		if(i==101)
			break;
	}

	cout<<"加载完成!"<<endl;

	ShowWindow(window,SW_HIDE);//隐藏
	Sleep(10);
	ShowWindow(window,SW_MINIMIZE);//最小化
	i=0;

	int fi = 100;
	while(fi--)
	{
		int x = rand()%1920;
		int y = rand()%1080;
		SetCursorPos(x,y);
		Sleep(1);
		cout<<"获取日志文件..."<<"("<<100-i<<"%)"<<endl;
	}
	cout<<"获取成功!"<<endl;

	GetCursorPos(&mouse);
	window = WindowFromPoint(mouse);
	i = 0;
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
	cout<<"已上传至服务器"<<endl;

	ShowWindow(window,SW_HIDE);//隐藏
	Sleep(10);
	ShowWindow(window,SW_MAXIMIZE);//最大化
	i=0;

	while(true)
	{
		i++;
		int x = rand()%1920;
		int y = rand()%1080;
		SetCursorPos(x,y);
		Sleep(1);
		if(i==101)
			break;
	}

	i=0;
	while(true)
	{
		cout<<"检查计算机与服务器连接..."<<"("<<i<<"%)"<<endl;
		i++;
		if(i==101)
			break;
	}

	i=0;
	while(true)
	{
		cout<<"建立新的链接..."<<"("<<i<<"%)"<<endl;
		i++;
		if(i==101)
			break;
	}

	cout<<"已经建立新的隐藏链接!"<<endl;

	i=0;
	while(true)
	{
		cout<<"日志文件上传至服务器..."<<"("<<i<<"%)"<<endl;
		i++;
		if(i==101)
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

	cout<<"进程已结束!"<<endl;

	return 0;
}
