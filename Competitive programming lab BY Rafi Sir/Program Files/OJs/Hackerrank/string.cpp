#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a1,a2,a3;
    char temp;
    cin>>a1>>a2;
    cout<<a1.length()<<endl;
    cout << a2.length() << endl;
    a3=a1+a2;
    cout<<a3<<endl;
    temp =a1[0];
    a1[0]=a2[0];
    a2[0]=temp;
    cout <<a1 << endl;
    cout << a2<< endl;
    return 0;
}

w