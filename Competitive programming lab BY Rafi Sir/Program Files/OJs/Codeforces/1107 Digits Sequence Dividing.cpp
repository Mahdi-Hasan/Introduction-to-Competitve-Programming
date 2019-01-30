
#include<bits/stdc++.h>
using namespace std;


int arr[1000];
int T,N,c,no_of_digit;
string s;
vector<string>s1;
int main()
{
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        cin>>s;
        for(int j=0;s[j]!= '\0';j++)
        {
           if(s[j]>s[j]+1)
               c=0;
            else
                c=12313;
        }
        for(int j=0;s[j]!= '\0';j++)
        {
           if(s[j]==s[j]+1)
               c=1;
            else
                c=2342543;
        }
        if(c!=0 &&c!=1)
        {

            for(int j=0;s[j]!= '\0';j++)
            {
                for(int k=0;k<no_of_digit;k++)
                s1.push_back(s);
            }
        }
    }
    sort(s1.begin(),s1.end());
    for(int i=0;i<T;i++)
    {
        cout<<s1[i]<<" ";
    }
}
