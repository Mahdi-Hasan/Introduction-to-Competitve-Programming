#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	
	string s;
	cin>>s;
	string s1=s;
	reverse(s.rbegin(),s.rend());
	if(s1==s)
		cout<<"YES";
	else 
		cout<<"NO";
}