#include<iostream>
using namespace std;
int prefix_sum(int arr[],int len,int n){
	if(n==0) return 0;
	int subresult = prefix_sum(arr,len,n-1);
	return arr[n-1]+subresult;
}
int main() {
	int arr[5]={1, 3, 4, 6, 7};
	cout<<prefix_sum(arr,5,3);
	return 0;
}