#include<iostream>
using namespace std;
int prefix_sum(int arr[],int n){
	if(n==0) return 0;
	int subresult = prefix_sum(arr+1,n-1); 
/* arr+1 is arr starts from pos 1
	like arr = {1,3,4,6,7}
	arr+1  = {3,4,6,7}
*/
	return arr[0]+subresult;
}
int main() {
	int arr[5]={1, 3, 4, 6, 7};
	cout<<prefix_sum(arr,3);
	return 0;
}