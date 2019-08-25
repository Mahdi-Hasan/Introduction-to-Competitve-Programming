#include<bits/stdc++.h>
using namespace std;
#define ll long long
int num,bin,x,n;
int main(int argc, char const *argv[])
{
    string pass;
	cin>>pass;
    putchar(toupper(pass[0]));
	for(int i=1;i<pass.length();i++)
    {
       if(pass[i]=='s')
            cout<<"$";
        else if(pass[i]=='i')
            cout<<"!";
        else if(pass[i]=='o')
            cout<<"()";
        else
            cout<<pass[i];

    }
    cout<<".";
}