#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu
{
	int a;
	char ch[23];
}s;
int main() {
	struct stu *p;
	p = &s;
	strcpy(p->ch, "cuiqin");
	p->a = 10;
	printf("%d %s \n", p->a, p->ch);
	return 0;
}