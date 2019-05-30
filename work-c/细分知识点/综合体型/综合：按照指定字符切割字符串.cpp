/*
    输入一连串数字，数字之间逗号隔开，把数字存到数组或者向量里。
*/

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
    string input;
    cout<<"输入一串以逗号为分隔符的数字字符串："<<endl;
    while(cin>>input)
    {
		//vector
        vector<int> nums;
        // string->char *
		//c_str
        char *s_input = (char *)input.c_str();
        //const char * split = ",";//也可以直接使用分割字符串不管啥都行哦
        // 以逗号为分隔符拆分字符串
		//strtok
        //char *p = strtok(s_input, split);
		char* p = strtok(s_input, "ab");

        int a;
        while(p != NULL)
        {
            // char * -> int
			//sscanf
            sscanf(p, "%d", &a);
			//push_back
            nums.push_back(a);
            p=strtok(NULL, "ab");
        }

        cout<<"输出得到的数字："<<endl;
        for(a = 0; a < nums.size(); a++)
        {
            cout<<nums[a]<<endl;
        }
    }
    return 0;
}
//https://blog.csdn.net/xufan0001/article/details/70187836