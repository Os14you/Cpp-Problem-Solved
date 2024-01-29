#include<iostream>
using namespace std;
int suffix_sum(int arr[],int len,int n){
	if(n==1) return arr[len-1];
	int subresult = suffix_sum(arr,len-1,n-1);
	return arr[len-1]+subresult;
}
int main() {
	int arr[5]={1, 3, 4, 6, 7};
	cout<<suffix_sum(arr,5,3);
	return 0;
}