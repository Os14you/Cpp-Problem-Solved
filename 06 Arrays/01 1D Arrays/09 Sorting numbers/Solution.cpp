#include <iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size :"<<endl;  cin>>size;
	int num[size],freq[501]={0};
	for(int i=0;i<size;i++){
		cin>>num[i];
		freq[num[i]]++;
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<freq[i];j++)
			cout<<i<<" ";
	}
	return 0;
}