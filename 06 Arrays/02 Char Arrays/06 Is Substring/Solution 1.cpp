#include <iostream>
using namespace std;
int main(){
	string str,substr;
  	bool is_sub = true;
    int start=-1;
  	cout<<"Enter the main string : "; cin>>str;
  	cout<<"Enter the sub string : "; cin>>substr;
	if(str.size()<substr.size())
        is_sub = false;
    for(int i=0;i<str.size();i++){
        if(str[i]==substr[0]){
            start=i;
            break;
        }
    }
    if(start!=-1){
        for(int i=0;i<substr.size();i++){
            if(str[start+i]!=substr[i])
                is_sub=false;
        }
    }
  	if(is_sub)
		cout<<">> Yes";
  	else
    	cout<<">> No";
	return 0;
}