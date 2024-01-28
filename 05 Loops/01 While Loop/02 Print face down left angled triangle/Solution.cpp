#include<iostream>
using namespace std;
int main(){
	int num,x=0;
	cout<<"Input : ";
	cin>>num;
	cout<<"-----\n";
	while(x<num){
		int y=num-1;
		while(y>=x){cout<<"*"; y--; }
		x++;
		cout<<"\n";
	}
	return 0;
}