#include<iostream>
#include <stack>
using namespace std;
string removeDuplicates(string S){
	stack<char> stk;
	for(int i=0;i<S.size();i++){
		if(S[i-1]==S[i])
			stk.pop(),i++;
		else
			stk.push(S[i-1]);
	}
	string result="";
	while(!stk.empty()){
		result+=stk.top(),stk.pop();
	}
	return result;

}
int main() {
	cout<<removeDuplicates("abbaca");
	return 0;
}