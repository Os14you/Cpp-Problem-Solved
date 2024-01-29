#include <iostream>
using namespace std;
int main(){
	string str1,str2;
    cout<< "Enter 2 strings: "<<endl; cin>>str1>>str2;
    for(int i=0;i<100;i++){
        if(str1[i]=='\0' && str2[i]=='\0' || str2[i] == '\0'){
            cout<<">> YES";
            return 0;
        }else if(str1[i] == '\0'){
            cout<<">> NO";
            return 0;
        }
    }
}