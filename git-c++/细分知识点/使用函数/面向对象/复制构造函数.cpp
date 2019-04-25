#include <iostream>

//形参时本类对象的引用：用一个已存在的对象去初始化同类型的新对象

using namespace std;

//用初始化新对象，使用const防止实参被修改
//需要的嗜好，用本类作为另一个对象的初始值

//形参时类的对象，调用时，将使用实参对象初始化形参对象，发生复制构造
//返回值是类的对象，执行完成返回主调函数，将使用return 语句中的对象初始化一个临时无名对象，床底给主调函数发生复制构造

//不希望对象被复制构造：声明private，不提供函数的实现;=delete

class Point {
public:
	Point(int xx = 0, int yy = 0){
		x = xx;
		y = yy;
	}//构造函数,内联
	Point(const Point& p) = delete;//不生成构造函数
private:
	int x, y;//私有数据
};
