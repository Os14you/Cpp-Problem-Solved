#include<iostream>
using namespace std;
int main(){
	int n,mv=0,mr=0;
	cout<<"Enter the size of the array :"<<endl;
	cin>>n;
	int arr[n],freq[770]={0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
		freq[arr[i]+500]++;
	}
	for(int i=0;i<770;i++){
		if(freq[i]>mr){
			mr=freq[i]; mv=i-500;
		}}
	cout<<mv<<" repeated "<<mr<<" times .";
	return 0;
}