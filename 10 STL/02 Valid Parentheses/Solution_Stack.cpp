#include<iostream>
#include <stack>
using namespace std;

int sum_stack(stack<int> a){
	int sum = 0 ;
	while(!a.empty()){
		sum += a.top(), a.pop();
	}
	return sum;
}
int max_3stack_sum(stack<int> &a,stack<int> &b,stack<int> &c){
	int sum_a = sum_stack(a),sum_b = sum_stack(b),sum_c = sum_stack(c);
	while (!a.empty() && !b.empty() && !c.empty())
	{
		if(sum_a==sum_b && sum_c==sum_b)
			return sum_a;
		if(sum_a>=sum_b && sum_a>=sum_c)
			sum_a -= a.top() , a.pop();
		else if(sum_b>=sum_a && sum_b>=sum_c)
			sum_b -= b.top() , b.pop();
		else
			sum_c -= c.top() , c.pop();
	}
	return 0;
}
int main() {
	stack<int> a,b,c;
	a.push(1),a.push(2),a.push(3),a.push(4);
	b.push(2),b.push(2),b.push(2),b.push(4),b.push(0);
	c.push(0),c.push(3),c.push(3),c.push(5);
	cout << "Max Sum is: "<<max_3stack_sum (a,b,c);
	return 0;
}