#include<iostream>
using namespace std;
int main(){
	int num,x=0;
	cout<<"Input N : "<<endl;
	cin>>num;
	cout<<"-----\n";
	for(x;x<num;x++){
		for(int y=0;y<=x;y++)
			cout<<"*";
		cout<<"\n";
	}
	return 0;
}