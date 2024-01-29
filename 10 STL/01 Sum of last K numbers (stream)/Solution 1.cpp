#include <iostream>
#include <queue>
using namespace std;
struct last_k_numbers_sum {
	int k,sum;
	queue<int> sum_q;
	last_k_numbers_sum(int _k){
		k = _k , sum = 0;
	}
	int next(int new_num){
		if(sum_q.size()==k){
			sum -= sum_q.front();
			sum_q.pop();
			sum_q.push(new_num);
			return sum += new_num;
		}
		sum_q.push(new_num);
		return sum += new_num;
	}
};
int main(){
	last_k_numbers_sum processor(4);
	int num;
	while (cin>>num) 
		cout<<processor.next(num)<<endl;
	return 0;
}