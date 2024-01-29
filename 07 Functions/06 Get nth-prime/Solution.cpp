#include <iostream>
using namespace std;
bool is_prime(int num){
	for(int i=2;i<num;i++){
		if(num%i==0)
			return false;
	}
	return true;
}
int nth_prime(int n){
	int cnt=0,num=1;
	while(num++){
		if(is_prime(num))
			cnt++;
		if(cnt==n)
			return num;
	}
}
int main(){
	int nth;
	cout<<"Enter the nth : "; cin>>nth;
	cout<<"The prime is "<<nth_prime(nth);
	return 0;
}