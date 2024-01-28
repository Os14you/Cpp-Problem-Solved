#include <iostream>
using namespace std;
int main(){
	int n,k,max_sum=-1000000000;
	cout<<"Enter the size of the array :"<<endl; cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array :"<<endl;
	for(int i=0;i<n;++i)
		cin>>arr[i];
	cout<<"Enter the size of the window :"<<endl; cin>>k;
	for(int i=0;i<n-k+1;i++){
		int sum =0;
		for(int j=0;j<k;j++){
			sum+=arr[i+j];
			if(sum>max_sum)
				max_sum=sum;
		}
	}
	cout<<"The maximum sum is equal to "<<max_sum;
	return 0;
}