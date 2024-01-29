#include<iostream>
#include <stack>
using namespace std;
int score_of_par(string str){
	stack<int> stk;
	stk.push(0);
	for(auto c : str){
		if(c == '(')
			stk.push(0);
		else {
			int last = stk.top();
			stk.pop();
			if(last == 0)
				last = 1;
			else
				last *= 2;
			int perant_par = stk.top()+last;
			stk.pop(),stk.push(perant_par);
		}
	}
	return stk.top();
}
int main() {
	cout<<score_of_par("((())(()))");
	return 0;
}