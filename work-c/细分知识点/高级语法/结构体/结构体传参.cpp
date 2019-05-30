#include <stdio.h>
#include <string.h>
struct S
{
	int data[100];
	int num;
};

struct S s = {{1,2,3,4},233};
void print1(struct S s) {
	printf("%d\n", s.num);
}
void print2(struct S *ps) {
	printf("%d\n", s.num);
}

int main() {
	//way1: 把结构体整个传进去
	//print1(s);//占地内存太大
	//way2: 把结构体地址传进去
	print2(&s);
	return 0;
}
