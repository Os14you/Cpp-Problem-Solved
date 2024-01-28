#include <iostream>
using namespace std;
int main(){
	int n,k,max_sum=0;
	cout<<"Enter the size of the array :"<<endl; cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array :"<<endl;
	for(int i=0;i<n;++i)
		cin>>arr[i];
	cout<<"Enter the size of the window :"<<endl; cin>>k;
	for(int i=0;i<k;i++)
		max_sum+=arr[i];
	int sum=max_sum;
	for(int i=k;i<n;i++){
		sum=sum-arr[i-k]+arr[i];
		if(max_sum<sum)
			max_sum = sum;
	}
	cout<<"The maximum sum is equal to "<<max_sum;
	return 0;
}