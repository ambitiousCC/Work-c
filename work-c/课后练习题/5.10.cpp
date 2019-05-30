#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int N;
    cout<<"Enter the number of student: ";
    cin>>N;

    int student[N];
    int scores[N];
    string names[N];
    for(int i = 0; i < N; i++)
    {
        cout<<"Enter the each number of student: ";
        cin>>student[i];
        cout<<"Enter the name and score of student: ";
        cin>>names[i];
        cin>>scores[i];
    }

    int cpy[N];
    for(int i = 0; i < N; i++)
    {
        cpy[i] = scores[i];
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            if(scores[i]<scores[j])
            {
                int temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }

    int max = scores[0];
    vector<int> max_index;
    for(int i = 0; i < N; i++)
    {
        if(cpy[i]==max)
        {
            max_index.push_back(i);
        }

    }

    if(max_index.size()>1)
    {
        for(int i = 0; i < max_index.size(); i++)
            cout<<names[max_index[i]]<<" "<<max<<endl;
    }
    else
        cout<<names[max_index[0]]<<" "<<max<<endl;

    return 0;
}
