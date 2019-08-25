#include<bits/stdc++.h>
using namespace std;
int countDigits(int x)
{
    int cont= 0;
    while(x)
    {
        cont++;
        x=x/10;
    }
    return cont;
}
void cyclic(int N)
{
    int num = N;
    int n = countDigits(N);
    while(1)
    {
        cout<< num<<endl;
        int rem = num%10;
        int div = num/10;
        num = (pow(10,n-1))*rem+div;
        if(num == N)
        {
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    if(n%2 != 0)
    {
        n--;
    }
    int ara[2];
    int N = 47;
    for(int i = 2; i <= n;i+=2)
    {                            
        int x = N;
        if(i!=2)
        {
            N = (pow(10,i-2))*x+47;
            cout << (pow(10,i-2))*x+47 << endl;
        }
        cyclic(N);
    }
}
