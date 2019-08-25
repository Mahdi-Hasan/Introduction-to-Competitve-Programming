#include<bits/stdc++.h>
using namespace std;
#define ll long long
int num,bin,x;
int main(int argc, char const *argv[])
{
	cin>>num;
	while (num > 0)
    {
        bin = num % 2;
        if(bin==1)
        	x++;
        num /= 2;
    }
    long long ans=pow(2,x)-1;
    cout<<ans;
}