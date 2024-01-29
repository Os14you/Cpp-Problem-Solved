#include<iostream>
#include <set>
#include <vector>
using namespace std;
vector<int> max_in_windows(vector<int> &arr,int k){
	vector<int> result;
	if((int)arr.size()<k)
		return result;
	multiset<int> set_nums;
	for(int i=0;i<k;i++)
		set_nums.insert(-arr[i]);
	result.push_back(-*set_nums.begin());
	for(int i=k;i<(int)arr.size();i++){
		set_nums.erase(set_nums.find(-arr[i-k]));
		set_nums.insert(-arr[i]);
		result.push_back(-*set_nums.begin());
	}
	return result;
}
int main() {
	vector<int> vec;
	vec.push_back(1),vec.push_back(3),vec.push_back(-1),vec.push_back(-3),vec.push_back(5);
	vec.push_back(3),vec.push_back(6),vec.push_back(7);
	vector<int> res = max_in_windows(vec,3);
	for(auto &it : res)
		cout<<it<<" ";
	return 0;
}