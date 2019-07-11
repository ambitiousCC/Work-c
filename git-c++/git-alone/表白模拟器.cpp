#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <windows.h>
#include <winable.h>
#include <ctime>
#include <cmath>

using namespace std;

#define X_DIVIDED_BY_Y 0.5
#define MAX_X (35.0 / X_DIVIDED_BY_Y)
#define MAX_Y 35.0
#define THRESHOLD 0.5
#define A 13

char getSentenceChar(const char *sentence, int &index) 
{
    while(true) 
	{
        if (index >= strlen(sentence)) 
		{
            index = 0;
        }
        char c = sentence[index++];

        if(' ' == c) 
		{
            index++;
        } 
		else 
		{
            return c;
        }
    }
}

float getX(float x)
{
    return (x - MAX_X / 2) * X_DIVIDED_BY_Y;
}

float getY(float y) 
{
    return MAX_Y / 7.0 - y;
}

bool func(float x, float y) 
{
    return (pow(x, 2) + pow(y, 2) + A * x - A * sqrt(pow(x, 2) + pow(y, 2))) < THRESHOLD;
}

int main()
{
	srand(time(0));
	POINT mouse;
	HWND window;

	window = FindWindow(NULL,"小东西");
	int i = 25;
	while(i--)
	{
		ShowWindow(window,SW_HIDE);
		Sleep(1);
		ShowWindow(window,SW_MAXIMIZE);
		Sleep(1);
		ShowWindow(window,SW_MINIMIZE);
		Sleep(1);
		ShowWindow(window,SW_RESTORE);
		Sleep(1);
		if(i<80)
			cout<<"connecting... ("<<100-i*2<<"%)"<<endl;
	}
	for(i=80;i<=100;i++)
		cout<<"connecting ... ("<<i<<"%)"<<endl;
	cout<<"connect successful!"<<endl;

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
	}

	GetCursorPos(&mouse);
	window = WindowFromPoint(mouse);
	i = 0;
	while(true)
	{
		i++;
		ShowWindow(window,SW_HIDE);
		Sleep(200);
		ShowWindow(window,SW_MAXIMIZE);
		Sleep(200);
		ShowWindow(window,SW_MINIMIZE);
		Sleep(200);
		ShowWindow(window,SW_RESTORE);
		Sleep(200);
		if(i==2)
			break;
	}

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
		cout<<"I love you for "<<i<<" times"<<endl;
		if(i==3000)
			break;
	}

	i=0;
	while(true)
	{
		i++;
		ShowWindow(window,SW_HIDE);
		Sleep(200);
		ShowWindow(window,SW_MAXIMIZE);
		Sleep(200);
		ShowWindow(window,SW_MINIMIZE);
		Sleep(200);
		ShowWindow(window,SW_RESTORE);
		Sleep(200);
		if(i==2)
			break;
	}

	Sleep(1000);
	cout<<"oh ... oh"<<endl;
	Sleep(1000);
	cout<<"oh ... just for a while!!!"<<endl;

	Sleep(3000);

	const char *LOVE_SENTENCE = "*";
    int sentenceIndex = 0;

    for (int y = 0; y <= MAX_Y; y++) 
	{
        for (int x = 0; x <= MAX_X; x++) 
		{
            cout<<(func(getY(y), getX(x)) ? getSentenceChar(LOVE_SENTENCE, sentenceIndex) : '.');
        }
        cout<<endl;
    }

	system("pause");	

	return 0;
}
