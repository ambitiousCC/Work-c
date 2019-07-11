#include <iostream>
#include <string>
using namespace std;
void change(string &);
int main()
{
	string ss;
	cin>>ss;

	change(ss);

	cout<<ss<<endl;

	return 0;
}
void change(string& ss)
{
	ss = "cuiqin";

}