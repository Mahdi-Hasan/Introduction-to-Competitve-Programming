#include<iostream>

using namespace std;
int a,sum,c,b,d,e,power_result;
int pow(int base,int power)
    {
        if(power==0)
            power_result=1;

        else
        {
            pow(base,power-1);
            power_result*=base;
        }
        return power_result;
    }
int main()
{
    cin>>a;
    for(int i=0;i<=a;i++)
    {
        b=pow(i,i);
        sum+=b;

    }
    cout<<sum;
}
