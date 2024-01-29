#include <iostream>
using namespace std;
int main(){
	string str,strlow="YZIMNESTODUAPWXHQFBRJKCGVL",strdigits="!@#$%^&*()";
    cout<<"Enter the string :"<<endl;
    cin>>str; // or getline(cin,str); if we want it to code a string with spaces.
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z')
            str[i] = strlow[(int)(str[i] - 'a')];
        else if(str[i]>='0' && str[i]<='9')
            str[i] = strdigits[(int)(str[i] - '0')];
    }
    cout<<">> "<<str<<endl;
	return 0;
}