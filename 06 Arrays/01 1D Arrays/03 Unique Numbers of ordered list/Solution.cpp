#include <iostream>
#include <cassert>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size :"<<endl;   cin>>size;
	int arr[size];
	cout<<"Enter the elements :"<<endl;   cin>>arr[0];
	for(int i=0;i<size;i++)
		cin>>arr[i];
	cout<<arr[0]<<" ";
	for(int i=1;i<size;i++){
		assert(arr[i]>=arr[i-1]); // make sure that the array is ordered
		if(arr[i]!=arr[i-1])
			cout<<arr[i]<<" ";
	}
	return 0;
}