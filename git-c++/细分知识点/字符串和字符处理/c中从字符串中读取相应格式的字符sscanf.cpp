#include <cstdlib>//
#include <cstdio>//
#include <string>//

int main()
{
	//功能：从 字符串 读取格式化输入，超级好使！！！
	char a[100], alpha[100];
	int num;
	strcpy(a, "123abc");

	//sscanf(const char* str, const char *format...)
	//format [=%[*][width][modifiers]type=]
	//因为声明时只是int类型，需要传入地址(数组名就是地址)
	sscanf(a,"%d%s", &num, alpha);

	printf("%s %d\n", alpha, num);//输出格式

	/*=========================================================*/
    int day, year;
    char weekday[20], month[20], dtm[100];

    strcpy( dtm, "Saturday March 25 1989" );
    sscanf( dtm, "%s %s %d  %d", weekday, month, &day, &year );

    printf("%s %d, %d = %s\n", month, day, year, weekday );

   return 0;

}