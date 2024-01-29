#include<bits/stdc++.h>
using namespace std;
vector<int> next_greater(vector<int> &vec){
	vector<int> result((int)vec.size(),-1);
	stack<int> pos; // postions of unchanged values
	for(int i=0;i<(int)vec.size();i++){
		while(!pos.empty() && vec[i] > vec[pos.top()])
			result[pos.top()] = vec[i],pos.pop();
		pos.push(i);
	}
	return result;
}
int main() {
	vector<int> vec = { 73, 74, 75, 71, 69, 72, 76, 73 };
	vec = next_greater(vec);
	for(auto it : vec)
		cout<<it<<" ";
	cout<<endl;
	return 0;
}