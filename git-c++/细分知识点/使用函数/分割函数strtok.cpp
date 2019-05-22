#include <iostream>
#include <string>
#include <cstdio>  
#include <cstdlib>   
  
int main()  
{  
    char str[]="ab,cd,ef";  
    char *ptr;  
	const char* split = ",";
    printf("before strtok:  str=%s\n",str);  
    printf("begin:\n");  
    ptr = strtok(str, split);  
    while(ptr != NULL){  
        printf("str=%s\n",str);  
        printf("ptr=%s\n",ptr);  
        ptr = strtok(NULL, split);  
    }  
    return 0;  
}

//strtok_r属于linux系统中提供的函数