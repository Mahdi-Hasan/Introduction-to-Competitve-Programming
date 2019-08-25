#include<bits/stdc++.h>
using namespace std;
#define ll long long
float N,e,e1;
int b,x;
ll sum;
int main()
{
	cin>>N;
	cout<<"[";
	b=floor(N);
	if(b/10<1)
		cout<<"+....] 0%";
	else{
	for (int i = 0; i < b/10; ++i)
	{
		cout<<"+";
	}
	cout<<"....] "<<b<<"%";
	}
}