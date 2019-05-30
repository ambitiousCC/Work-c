#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1 = "hello world",
		s2 = "you are right";
	cout<<"search s2's charactors from s1:"<<endl;
	cout<<s1<<endl;
	for(int i = 0; i < s2.length();
	i++) {
		int in = s1.find(s2[i]);
		cout<<"need find "<<s2[i]<<": ";
		if(in!=string::npos) 
			cout<<in<<endl;
		else
			cout<<"no"<<endl;
	}

	//return all correct index
	//const
	int p = 0; 
	char needs = 'l';
	cout<<"now we find all "<<needs<<"'s index in s1: ";
	//change the p to change the location to find
	while(s1.find(needs,p)!=string::npos) {
		p = s1.find(needs,p);
		cout<<p<<" ";
		p = p + 1;
	}
	cout<<endl;

	//cin
	string ps;
	cout<<"now i let you give a charactor or string to be found in s1: ";
    while(cin>>ps) {
        if(s1.find(ps)!=string::npos)
            cout<<ps<<"'s index is "<<s1.find(ps)<<endl;
        else
            cout<<"NO"<<endl;
		cout<<"more: ";
	}
	//you can try to create a program to find all char in a string

	return 0;
}