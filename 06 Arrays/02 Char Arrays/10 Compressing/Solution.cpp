#include <iostream>
using namespace std;
int main(){
	string str;
    int cnt=0;
    cout << "Enter a string: "; cin>>str;
    for(int i=0;i<str.size();i++){
        if(i && str[i]!=str[i-1]){
			cout<<str[i-1]<<cnt<<"_";
            cnt=0;
        }
		cnt++;
    }
    cout<<">> ";
    cout<<str[str.size()-1]<<cnt;
	return 0;
}