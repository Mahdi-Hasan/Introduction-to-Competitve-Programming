#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int b,d,p;
int main() {  
    string str="qewrtyupsidfghjklzxcavbnmo";
    char c;
    cin>>c;
    
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]==c)
        {
            p=i;
     //       cout<<p;
            break;
        }
    }
    for(int i=p+1;str[i]!=0;i++)
    {
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
       {
           d=i-p;
      //     cout<<" d "<<d;
           break;
       }
    }
    for(int i=p-1;str[i]!=0;i--)
    {
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
       {
           b=p-i;
       //    cout<<" b "<<b;
           break;
       }
    }
    int ans;
    if(b==0)
      ans=d;
    else if(d==0)
      ans=b;
    else
    {
      ans=(d>b)?p-b:p+d;
    }
    
    cout<<str[ans];
    return 0;
}