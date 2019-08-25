#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	string s1,s2;
	cin>>s1>>s2;
	int l1,l2,l;
	l1=s1.length();
	l2=s2.length();
	l=min(l1,l2);
	for(int i=l1,j=l2;i>=0||j>=0;i--,j--)
	{
		if(s1[i]-'0'+s2[j]-'0'>=10)
		{
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
}