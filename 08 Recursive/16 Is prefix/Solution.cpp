#include<iostream>
using namespace std;
bool is_prefix(string main, string prefix, int st_pos = 0){
	if(prefix[st_pos]=='\0')
		return true;
	if(prefix[st_pos]!=main[st_pos])
		return false;
	return is_prefix(main,prefix,st_pos+1);
}
int main() {
	cout<<is_prefix("abcdefgh", "abcd")<<endl;
	cout<<is_prefix("abcdefgh", "")<<endl;
	cout<<is_prefix("abcdefgh", "abd")<<endl;
	return 0;
}