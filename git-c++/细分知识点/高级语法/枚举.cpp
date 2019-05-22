#include <iostream>

using namespace std;

enum GameResult{WIN, LOSE, TIE, CANCEL};
int main()
{
	GameResult result;
	enum GameResult omit = CANCEL;
	for(int count = WIN; count<=CANCEL;count++)
	{
		result = GameResult(count);// 变量牛逼，可以当做数字计算似的
		if(result == omit)
			cout<<"The game was cancelled"<<endl;
		else
		{
			cout<<"The game was played";
			if(result == WIN)
				cout<<" and we won!";
			if(result == LOSE)
				cout<<" and we lost.";
			cout<<endl;
		}
	}
	return 0;
}
