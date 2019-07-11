#include <iostream>
#include <string>
//思路：制造密码转换器，先确定需要字母的序号，然后放到数组里面，利用一个巧妙的加密器加密以后存储，输出时转化
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <vector>
using namespace std;
//单词转换器，大小写转换，句子转换
//密码器，数字转换
//解码器，数字转换
//输入转数组序号字符串
void exchange(string,char alpha[],int,string &);
void printAtten1(string &);
void printAtten2();
void inputString(string &,int);
template <typename T>
void print(vector<T> v)
{
	for(vector<T>::iterator it = v.begin();it!=v.end();it++)
		cout<<*it;
	cout<<endl;
}
const int N = 27;
int main()
{
					// 0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25
	char alpha[N] = {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	char YN;
	cout<<"请选择转换模式：加密(y)、解密(n): ";
	cin>>YN;

	while(YN!='y'&&YN!='n')
	{
		cout<<"请按照要求选择功能: ";
		cin>>YN;
	}

	switch(YN)
	{
	case 'y':
	    {
			cin.clear();
			cin.sync();
			//先将小模块独立出去
			int i = 0;
            string input="", ss = "";
			int yn = 1;
			inputString(ss,yn);
			for(i=0;i<ss.length();i++)
			{
				if(ss[i]==' '||!isalpha(ss[i]))
				{
					input += ss[i];
					continue;
				}
				else 
				{
					if(!islower(ss[i]))
					{
						static_cast<char>(tolower(ss[i]));
					}
					input += ss[i];
				}
			}
			vector<int> v;
			for(i=0;i<ss.length();i++)
			{
				for(int j=0;j<N;j++)
				{
					if(ss[i]==alpha[j])
					{
						v.push_back(j*2);
						v.push_back(0);
					}
				}
			}
            print(v);
            break;
	    }
	case 'n':
			{
				cin.clear();
				cin.sync();
				int i = 0;
				string input="", ss = "";
				int yn = 0;
				inputString(ss,yn);
				for(i=0;i<ss.length();i++)
				{
					if(ss[i]==' '||!isdigit(ss[i]))
					{
						continue;
					}
					else 
					{
						input += ss[i];
					}
				}
				cout<<"yes"<<endl;

				vector<int> v;
				for(i=0;i<ss.length();i++)
				{
					char cc[1000] = "";
					string sss;
					sss = ss[i] + "";
					strcpy(cc,sss);
					int n = atoi(cc);
					cout<<n<<endl;
					int num = 0;
					while(n)
					{
						i++;
						ss = ss[i] + "";
						strcpy(cc,sss);
						n = atoi(cc);
						num = num*10 + n;
					}
					num/=10;
					v.push_back(num/2);
					i++;
					ss = ss[i] + "";
					strcpy(cc,sss);
					n = atoi(cc);
					if(n)
						i--;
					else
					{
						v.push_back(0);
						i++;
					}
				}
				print(v);
				break;
			}
    default:
        break;
	}


	//选择模式：输入转换成序列、序列转换成输出(入，出)

	return 0;
}

void exchange(string s,char alpha[],int len,string &nums)
{
	
}
void printAtten1(string& input)
{
	
}
void inputString(string& ss,int yn)
{
	int i =0;
	char input[1000];
	if(yn)
		cout<<"请输入您所需要加密的英文: ";
	else
		cout<<"请输入需要解密的数字串: ";
	cout<<endl;
	cin.getline(input,1000,'\n');
	
	while(input[i]!='\0')
	{
		ss += input[i];
		i++;
	}
	
}