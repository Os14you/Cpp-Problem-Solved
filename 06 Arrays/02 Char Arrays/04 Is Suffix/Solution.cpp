#include <iostream>
using namespace std;
int main(){
	string str1,str2;
  	bool is_suffix = true;
  	cout<<"Enter the main string : "; cin>>str1;
  	cout<<"Enter the sub string : ";  cin>>str2;
	if(str1.size()<str2.size())
		is_suffix=false;
	int bigend = str1.size()-1;
	int smallend = str2.size()-1;
  	for(int i=0;i<str2.size();i++){
		if(str1[bigend--]!=str2[smallend--]){
	    	is_suffix = false;
      	break;
    	}
  	}
  	if(is_suffix)
		cout<<">> Yes";
  	else
    	cout<<">> No";
	return 0;
}