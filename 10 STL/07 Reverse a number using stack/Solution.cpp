#include<iostream>
#include <queue>
using namespace std;

struct Ourstack {
	queue<int> qu;
	void push(int a){
		int s = qu.size();
		qu.push(a);
		while(s--) // reverse it to act like a stack 
			qu.push(qu.front()),qu.pop();
	}
	int top(){
		return qu.front();
	}
	void pop(){
		if(!qu.empty())
			qu.pop();
	}
	bool empty(){
		return qu.empty();
	}
};
int main() {
	Ourstack st;
	st.push(1),st.push(3),st.push(2),st.push(9);
	cout<<boolalpha;
	cout<<"The stack is empty ? "<<st.empty()<<endl;
	cout<<"The stack : ";
	while (!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl<<"The stack is empty ? "<<st.empty();
	return 0;
}