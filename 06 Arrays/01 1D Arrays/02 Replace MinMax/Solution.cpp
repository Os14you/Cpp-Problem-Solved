#include <iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of the array :"<<endl;    cin>>size;
	int num[size];
	cout<<"Enter the elements :"<<endl;
	cin>>num[0];
	int max,min; max=min=num[0];
	for(int i=1;i<size;i++){
		cin>>num[i];
		if(num[i]<min)
			min=num[i];
		if(num[i]>max)
			max=num[i];
	}
	for(int i=0;i<size;i++){
		if(num[i]==min)
			num[i]=max;
		else if(num[i]==max)
			num[i]=min;
	}
	cout<<"the new array is { ";
	for(int i=0;i<size;i++)
		cout<<num[i]<<" ";
	cout<<" }";
	return 0;
}