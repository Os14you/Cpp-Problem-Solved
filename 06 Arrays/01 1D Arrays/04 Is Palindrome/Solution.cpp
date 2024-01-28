#include <iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size :"<<endl;   cin>>size;
	int arr[size];
	bool is_pal = true;
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<size;i++)
		cin>>arr[i];
	for(int i=0;i<size/2;i++){
		if(arr[i]!=arr[size-i-1]){
			is_pal=false;
			break;
		}
	}
	if(is_pal)
		cout<<"It is a palindrome array ";
	else
		cout<<"It is not a palindrome array ";
	return 0;
}