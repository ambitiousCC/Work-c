#include<string.h>

#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
  
int main()  
{  
    char str[]="ab,cd,ef";  
    char *ptr;  
    char *p;  
    printf("before strtok:  str=%s\n",str);  
    printf("begin:\n");  
    ptr = strtok_r(str, ",", &p);  
    while(ptr != NULL){  
        printf("str=%s\n",str);  
        printf("ptr=%s\n",ptr);  
        ptr = strtok_r(NULL, ",", &p);  
    }  
    return 0;  
}
