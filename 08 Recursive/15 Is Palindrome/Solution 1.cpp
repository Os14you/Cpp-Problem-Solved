#include<iostream>
using namespace std;
bool is_palindrome(int arr[],int len){
	if(len<=0) return true;
	if(arr[0]!=arr[len-1]) return false;
	return is_palindrome(arr+1,len-2);
}
int main() {
	int arr[5]={1, 3, 4, 3, 1};
	cout<<is_palindrome(arr,5);
	return 0;
}