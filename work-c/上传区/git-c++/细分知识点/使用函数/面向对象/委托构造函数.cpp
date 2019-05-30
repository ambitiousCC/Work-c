#include <iostream>

using namespace std;

//
class Clock{
public:
	Clock(int newH, int newM,int newS);
	Clock();
private:
	int hour, minute,second;
};

//使用委托构造函数
Clock(int newH,int newM, int newS):
hour(newH),minute(newM),second(newS){}

Clock():Clock(0,0,0){}//委托同步修改 

int main()
{
	return 0;
}
