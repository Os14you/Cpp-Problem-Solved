#include<iostream>
using namespace std;
int main(){
	int num,a=0,b=1;
	cout<<"Input : "; cin>>num;
	cout<<">> ";
	while(num--){
		int c=a+b;
		cout<<a<<" ";
		a=b;b=c;
	}
	return 0;
}