#include<iostream>
using namespace std;
bool is_palindrome(int arr[],int start,int end){
	if(end<=start) return true;
	if(arr[start]!=arr[end]) return false;
	return is_palindrome(arr,start+1,end-1);
}
int main() {
	int arr[5]={1, 3, 4, 3, 1};
	cout<<is_palindrome(arr,0,4);
	return 0;
}