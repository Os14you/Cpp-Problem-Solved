#include <iostream>
#include <cassert>
using namespace std;
int main(){
	string str;
    int num=0;
    cout << "Enter a string: "; cin>>str;
    assert(str.size()<7);
    for(int i=0;i<str.size();i++){
        num=num*10+(str[i]-'0');
    }
    cout<<num<<" , "<<num*3;
	return 0;
}