#include<bits/stdc++.h>
using namespace std;
#define ll long long
int num,bin,x,n;
int main(int argc, char const *argv[])
{
	cin>>num;
	for(int i=1;i<=num;i++)
    {
        cin>>n;
        if(n>=x)
            x=n;
        else
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
}