#include <iostream>
using namespace std;
int main(){
	string str1,str2;
  bool is_perfix = true;
  cout<<"Enter the main string :"; cin>>str1;
  cout<<"Enter the sub string :";  cin>>str2;
	if(str1.size()<str2.size())
		is_perfix=false;
  for(int i=0;i<str2.size();i++){
		if(str1[i]!=str2[i]){
	    is_perfix = false;
      break;
    }
  }
  if(is_perfix)
		cout<<">> Yes";
  else
    cout<<">> No";
	return 0;
}