#include <iostream>
#include <cmath>
using namespace std;
void set_powers(int arr[], int len = 5, int m = 2){
	for(int i=0;i<len;i++)
		arr[i]=pow(m,i);
}
// or
/*
void set_powers(int arr[], int len = 5, int m = 2) {
	arr[0] = 1;
	for (int i = 1; i < len; ++i) {
		arr[i] = arr[i - 1] * m;
	}
}

*/ 
int main(){
	int length,num;
	cout<<"Enter the lenght and number m :"<<endl; cin>>length>>num;
	int powers[length];
	set_powers(powers,length, num);
	cout<<"Array of "<<num<<" powers : ";
	for(int i=0;i<length;i++)
		cout<<powers[i]<<" ";
	return 0;
}