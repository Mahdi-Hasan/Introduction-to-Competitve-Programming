#include<iostream>
using namespace std;
int base,power,power_result;
int  pow(int base,int power)
    {
        if (power==0)
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
    cin>>base>>power;
    cout<<pow(base,power);
}
