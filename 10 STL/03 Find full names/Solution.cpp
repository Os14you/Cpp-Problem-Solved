#include<iostream>
#include <map>
#include <stack>
using namespace std;

bool isvalid(string str){
	map<char,char> mp;
	mp[')'] = '(';
	mp[']'] = ']';
	mp['}'] = '{';
	stack<char> per;
	for(auto i :str){
		if(mp.count(i)){
			if(per.empty())
				return false;
			char open = mp[i];
			char cur_open = per.top();
			if(cur_open != open)
				return false;
			per.pop();
		}
		else{
			per.push(i);
		}
	}
	return per.empty();
}
int main() {
	string str;
	cin>>str;
	cout << boolalpha;
	cout<<"Pattern is valid ? "<<endl<<isvalid(str);
	return 0;
}