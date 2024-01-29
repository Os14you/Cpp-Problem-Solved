#include <iostream>
using namespace std;
string reverse_str(const string &str){
	string reversed = str;
	for(int i=0;i<str.size()/2;i++){
		char tmp=reversed[i];
		reversed[i]=reversed[str.size()-i-1];
		reversed[str.size()-i-1]=tmp;
	}
	return reversed;
}
int main(){
	string str;
	cout<<"Enter the string : ";  cin>>str;
	cout<<"The reversed string is "<<reverse_str(str);
	return 0;
}