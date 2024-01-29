#include<iostream>
#include <stack>
#include <queue>
using namespace std;
void print_queue(queue<int> q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}
void reverse_queue(queue<int>& q){
	stack<int> st;
	while(!q.empty()){
		st.push(q.front());
		q.pop();
	}
	while(!st.empty()){
		q.push(st.top());
		st.pop();
	}
}
int main() {
	queue<int> q;
	q.push(1),q.push(3),q.push(2),q.push(9),q.push(7);
	print_queue(q);
	reverse_queue(q);
	print_queue(q);
	return 0;
}