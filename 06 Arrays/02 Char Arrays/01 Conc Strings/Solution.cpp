#include <iostream>
using namespace std;
int main(){
	string str1,str2;
    int maxsize=0;
    cout<<"Input : "; cin>>str1;
    cout<<"Input : ";cin>>str2;
    cout<<">> ";
    if(str1.size()>str2.size())
        maxsize=str1.size();
    else
        maxsize=str2.size();
    for(int i=0;i<maxsize;i++){
        if(i<str1.size())
            cout<<str1[i];
        if(i<str2.size())
            cout<<str2[i];
    }
	return 0;
}