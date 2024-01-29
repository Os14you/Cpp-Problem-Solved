#include<bits/stdc++.h>
using namespace std;
vector<int> asteroidCollision(vector<int> &asteroids){
	vector<int> result;
	for(auto &asteroid : asteroids){
		// For every new asteroid, remove all what will explode
		// Only may happens when asteroid going backword and something coming forward
		bool is_exploded = false;
		while(!result.empty() && asteroid<0 && 0<result.back()){
			// last will explode.
			if(result.back() < -asteroid){
				result.pop_back();
				continue; // See if more explode
			}
			else if(result.back() == -asteroid) // both exploded
				result.pop_back();
			is_exploded = true; // only asteroid explode
			break;
		}
		if(!is_exploded)
			result.push_back(asteroid);
	}
	return result;
}

int main() {
	vector<int> arr1 {-2,-1,1,2};
	vector<int> result = asteroidCollision(arr1);
	for(auto element : result)
		cout<<element<<" ";
	cout<<endl;
	return 0;
}