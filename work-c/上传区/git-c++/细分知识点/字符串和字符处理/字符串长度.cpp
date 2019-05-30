#include <iostream>

using namespace std;

void strlen(char *,int &);
int main()
{
	char a;
	cin>>a;

	char *p = a;
	int n = 0;
	strlen(*p, n);

	cout<<n<<endl;
	return 0;

}

void strlen(char *p,int &n)
{
	while(*p!='\0')
	{
		n++;
		p++;
	}
}