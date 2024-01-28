#include <iostream>
using namespace std;
int main(){
	int size;
	cout<<"Input : ";    cin>>size;
	int nums[size];
	bool state =true;
	cout<<"Enter an element : "; cin>>nums[0];
	for(int i=1;i<size;i++){
		cout<<"Enter an element : "; cin>>nums[i];
		if(nums[i-1]>nums[i])
			state=false;
	}
	if(state)
		cout<<"the array is increasing !";
	else
		cout<<"the array is not increasing !";
	return 0;
}