#include <iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size :"<<endl;  cin>>size;
	int num[size]={0},freq[501]={0};
	for(int x=0;x<size;x++){
		int value;  cin>>value;
		if(!freq[value]){
			num[x]=value;
			freq[value]++;
		}
		else
			num[x]=-1;
	}
	for(int x=0;x<size;x++){
		if(num[x]!=-1)
			cout<<num[x]<<" ";
	}
	return 0;
}