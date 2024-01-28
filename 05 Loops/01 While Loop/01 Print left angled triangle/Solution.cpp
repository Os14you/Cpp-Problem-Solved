#include<iostream>
using namespace std;
int main(){
	int num,x;
	cout<<"Input : ";
	cin>>num;
	cout<<"-----\n";
	while(x<=num){
		int y=0;
		while(y<=x){cout<<"*"; y++;}
		x++;
		cout<<"\n";
	}
	return 0;
}