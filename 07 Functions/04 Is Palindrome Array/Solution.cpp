#include <iostream>
using namespace std;
bool is_Palindrome(int arr[],int len){
	for(int i=0;i<len/2;i++){
		if(arr[i]!=arr[len-i-1])
			return false;
	}
	return true;
}
int main(){
	int n;
	cout<<"Enter the size of the array : "; cin>>n;
	cout<<"Enter the "<<n<<" numbers :"<<endl; 
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	if(is_Palindrome(arr,n))
		cout<<"Is palindrome .";
	else
		cout<<"Is not palindrome .";
	return 0;
}