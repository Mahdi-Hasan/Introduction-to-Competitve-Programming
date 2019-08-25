#include<bits/stdc++.h>
using namespace std;
#define ll long long
int N,b,e,x;
ll sum;
int main()
{
	cin>>N>>b>>e;
	for (int i = 0; i < N; ++i)
	{
		cin>>x;
		if(i>=b && i<=e)
			sum+=x;
	}
	cout<<sum;
}