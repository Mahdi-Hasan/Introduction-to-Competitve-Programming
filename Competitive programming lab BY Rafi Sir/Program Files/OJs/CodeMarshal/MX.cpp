#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main () {
    int X, Y, Z,res;
    cin>>X;
    for(int j=1;j<=X;j++){
        res=-9234567;
        for(int i=0;i<=2;i++){
        int x;
        cin>>x;
        if(res<x)
            res=x;
    }
    cout<<"Case "<<j<<": "<<res<<endl;
    }

    return 0;
}
