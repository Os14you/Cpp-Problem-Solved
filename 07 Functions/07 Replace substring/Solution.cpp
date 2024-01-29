#include <iostream>
using namespace std;
bool starts_with(string input, string pattern, int pos){
	if (pos + pattern.size() > input.size()) return false;
	for (int i = 0; i<pattern.size(); ++i) {
		if(pattern[i]!=input[i+pos])
			return false;
	}
	return true;
}
string replace_str(string input, string pattern, string to){
	string result = "";
	for(int pos=0;pos<input.size();pos++){
		if(starts_with(input,pattern,pos)){
			result+=to;
			pos+=pattern.size()-1;
		}
		else
			result+=input[pos];
	}
	return result;
}
int main(){
	string str,pattern,to;
	cout<<"Enter the original String : "; cin>>str;
	cout<<"\nEnter Pattern To Replace : ";cin>>pattern;
	cout<<"\nEnter The Replacement Text : ";cin>>to;
	cout<<"\nThe new string is "<<replace_str(str,pattern,to);
	return 0;
}