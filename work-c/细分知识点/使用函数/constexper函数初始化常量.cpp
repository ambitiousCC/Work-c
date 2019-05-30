#include <iostream>

using namespace std;
constexpr int get_size() {
	return 20;
}

int main()
{
	constexpr int foo = get_size();//所有参数都是constexpr 返回类型一定是constexpr

	return 0;
}