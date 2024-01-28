#include<iostream>
using namespace std;
int main(){
	int n,q;
	cout<<"Enter the size of the numbers array :"<<endl;
	cin>>n;
	int arr_n[n];
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr_n[i];
	cout<<"Enter the number of the queries :"<<endl;
	cin>>q;
	int arr_q[q],arr_last[q]={0};
	cout<<"Enter the queries:"<<endl;
	for(int i=0;i<q;i++){		
		cin>>arr_q[i];
		int last =-1;
		for(int j=0;j<n;j++){
			if(arr_q[i]==arr_n[j])
				last = j;
		}
		arr_last[i]=last;
	}
	for(int i=0;i<q;i++)
		cout<<arr_last[i]<<" ";
	return 0;
}