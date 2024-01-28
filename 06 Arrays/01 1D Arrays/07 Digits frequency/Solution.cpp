#include<iostream>
using namespace std;
int main(){
	int n,value,freq[10]={0};
	cout<<"Enter the number :"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>value;
		while(value>0){
			freq[value%10]++;
			value/=10;
		}
	}
	for(int i=0;i<10;i++)
		cout<<i<<" "<<freq[i]<<endl;
	return 0;
}