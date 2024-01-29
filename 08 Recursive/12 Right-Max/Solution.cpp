#include<iostream>
using namespace std;
void right_max(int arr[], int len, int start_position = 0){
	if(len==1) return;
	right_max(arr,len-1,start_position+1);
	arr[start_position]=max(arr[start_position+1],arr[start_position]);
}
int main() {
	int arr[6]={1,3,5,7,4,2};
	right_max(arr,6);
	for(int i=0;i<6;i++)
		cout<<arr[i]<<" ";
	return 0;
}