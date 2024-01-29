#include <iostream>
using namespace std;
void reverse_str(const string &str);
int main(){
	string str;
	cout<<"Enter the string : "; cin>>str;
	reverse_str(str);
	return 0;
}
void reverse_str(const string &str){
	cout<<"The reversed string is ";
	for(int i=0;i<str.size();i++)
		cout<<str[str.size()-i-1];
}