/**
 * function:    皇冠
 * Author:      崔秦
 * version:     1.0
 * thinking:    首先列出每一行的*和空格的个数，找到思路：可以看做是八个三角形叠加，每一行的*和空格交替分布
 *              *     * *     *
 *              1 3 3 1 1 3 3 1
 *              2 2 2 2 2 2 2 2
 *              3 1 1 3 3 1 1 3
 *              4 0 0 4 4 0 0 4
 *              找到关系式：
 *              for h = 4//外部确定高度
 *              {
 *              for i => h			    *
 *              for j => (h - i)*2		\b
 *              for k => h * 2		    *   注意：这里，如果继续沿用i的值，会导致i的值为6
 *              for j => (h - i)*2		\b
 *              for i => h			    *
 *              }
 */
 #include <iostream>

 using namespace std;

 int main()
 {
     //根据星号和空格的关系构图
     int h,i,j,k;
     int num;
     cout<<"请输入你想要的高度"<<endl;
     cin>>num;

     for(h = 0;h<=num;h++)
     {
         for(i = 0;i<h;i++)
         {
             cout<<"*";
         }
         for(j = 0;j<(num-i)*2;j++)
         {
             cout<<" ";
         }
         for(k = 0;k<h*2;k++)
         {
             cout<<"*";
         }
         for(j = 0;j<(num-i)*2;j++)
         {
             cout<<" ";
         }
         for(i = 0;i<h;i++)
         {
             cout<<"*";
         }
         cout<<endl;
     }

     return 0;
 }
