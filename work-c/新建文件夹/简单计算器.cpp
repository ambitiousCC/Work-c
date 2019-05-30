#include "stdio.h"
int n,i;         /* 请注意这里的n与i设置为全局变量的用意 */  
float val[100];  /* 这个数组用来收集字符流中的数 */
char c[1000],fu[100];  /* c数组是字符流，而fu数组用来收集计算符号+-* /和｛、｝*/
 
float digui()
{
    float he=0,ji=0;  /* he代表加减运算结果，ji代表乘除运算结果 */
    char hefu='+';    /* 每次进入递归是，都要把标示符he设置为0，hefu设置为+。但那个标示符ji可以不用设置 */
     
    for( ;fu[i]!='}'&&fu[i]!='=';i++)
    {
        switch(fu[i])
        {
 
            case '{':
            i++;
            digui();  // 如果遇到圆括号，则优先计算圆括号里面的内容
            break;
             
             
             
            case '+':
            if(hefu=='+') {val[n] = he + val[n];he = val[n];}  
            else          {val[n] = he - val[n],he = val[n];}  // 如果+、-后面的符号依然是加减，则可以进行计算
            hefu = '+';                                        
            n++;
            break;
             
            case '-':
            if(hefu=='+')  {val[n] = he + val[n];he = val[n];}  
            else           {val[n] = he - val[n];he = val[n];}  // 同上
            hefu = '-';
            n++;
            break;
             
            case '*':  //  如果遇到优先级高一级的乘符号【或除符号】，则进入循环，直至遇到非乘除符号时推出
            {
            ji=val[n];  // ji在这里被设置
            while(1)
            {
               if(fu[i] == '*')
               {
                  if(fu[i+1] == '{')  //  如果在乘除循环里遇到圆括号，则递归调用自身，就是优先计算圆括号里面的内容
                    {
                            i+=2;n++;
                            ji = ji * digui();
                    }
                  else
                    {
                            ji = ji*val[n+1];
                            i++;n++;
                    }
                }
                else if(fu[i] == '/')
                {
                    if(fu[i+1] == '{')
                    {
                            i+=2;n++;
                            ji = ji / digui();
                    }
                    else
                    {
                            ji = ji/val[n+1];
                            i++;n++;
                    }
                }
                else break;  // 遇到非乘除符号，退出
            }
            val[n] = ji;  // 乘除循环结束，把n现在指向的数设置成循环计算的结果数，以便它以后可以与he计算，最后得出前面所有数的运算结果
            if(fu[i]=='+'||fu[i]=='-')
            i--;
            break;
            }
             
            case '/':   //这个与上面那个case里面的作用一样
            {
                ji = val[n];
                while(1)
                {
                    if(fu[i] == '*')
                    {
                        if(fu[i+1] == '{')
                        {
                            i+=2;n++;
                            ji = ji * digui();
                        }
                        else
                        {
                            ji = ji*val[n+1];
                            i++;n++;
                        }
                    }
                    if(fu[i] == '/')
                    {
                        if(fu[i+1] == '{')
                        {
                            i+=2;n++;
                            ji = ji / digui();
                             
                        }
                        else
                        {
                            ji = ji/val[n+1];
                            i++;n++;
                        }
                    }
                    else break;  
                }
            } 
            val[n] = ji;
            if(fu[i]=='+'||fu[i]=='-')
            i--;
            break;
            }
    }
     
    if(hefu == '+') val[n] = he + val[n];  // 到这里就是到了一个递归的结束，然后根据hefu的状态决定进行+运算或-运算
    else val[n] = he - val[n];
     
    return val[n];  // 最后我们需要返回这个值
}
 
void main()
{
    int a=0,j=0;float b=0,d=0,g=10;;
    gets(c);
     
    for(i=0;c[i]!=0&&i<1000;i++)
    {
        if(c[i]>='0'&&c[i]<='9')
        {
             
            while(c[i]>='0'&&c[i]<='9')
            {
                b=(c[i]-'0')+b*10;
                i++;
            }
            if(c[i]=='.')
            {
                i++;
                while(c[i]>='0'&&c[i]<='9')
                {
                    d=d+(c[i]-'0')/g;
                    g*=10;
                    i++;
                }
            }  // 以上是手机输入流中的数
        val[n]=b+d;
        n++;
        }
      b=0;d=0;g=10;
    }
     
    for(i=0;c[i]!=0;i++)
        {
            if(c[i] < '0' || c[i] > '9')
            fu[j++]=c[i];
        }  // 这个则是收集输入流中的运算符
    
    j=n;
     
    i=0;
    n=0;  // 这里的清零是必须的
     
     
    printf(":::::%f\n", digui());
}