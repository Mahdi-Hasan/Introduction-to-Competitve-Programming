#include<bits/stdc++.h>
using namespace std;
#define ll long long
int num,bin,x,n;
int main(int argc, char const *argv[])
{
    string pass;
	cin>>pass;
	for(int i=0;i<pass.length();i++)
    {
       if(pass[i]=='(')
        {
            for (int j = i+1; j < pass.length(); ++j)
            {
                if(pass[j]==')')
                {
                    pass[j]='.';
                    pass[i]='.';
                    break;
                }
            }
        }
    }
//    cout<<pass;
    for(int i=0;i<pass.length();i++)
    {
       if(pass[i]=='(' ||pass[i]==')')
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
}