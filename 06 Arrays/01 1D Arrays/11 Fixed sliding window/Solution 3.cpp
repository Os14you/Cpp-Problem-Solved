#include <iostream>
using namespace std;
int main(){
	int n,k,max_sum=-10000000;
	cout<<"Enter the size of the array :"<<endl; cin>>n;
	int arr[n]={0};
	cout<<"Enter the elements of the array :"<<endl;
	for(int i=1;i<=n;++i){
		cin>>arr[i];
		arr[i]+=arr[i-1];
	}
	cout<<"Enter the size of the window :"<<endl; cin>>k;
	for(int i=k;i<=n;i++){
		if(max_sum<arr[i]-arr[i-k])
			max_sum = arr[i]-arr[i-k];
	}
	cout<<"The maximum sum is equal to "<<max_sum;
	return 0;
}