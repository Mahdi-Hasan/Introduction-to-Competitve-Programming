#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
int ni=0;
vector<int> parseInts(string str) {
	int a;
	char c;
	string sta=",";
	string stra=str+sta;
	//cout<<stra;
	std::vector<int> v;
	stringstream ss(stra);
	
	while(ss>>a>>c){
		
		v.push_back(a);
		//cout<<a<<" ";
	}
	return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers=parseInts(str);;
    
    
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

