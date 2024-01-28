#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Input N : "; cin>>n;
    cout<<"---------------\n";
	int row=1;
	while(row<n){
		int cnt =1;
		while(cnt<=(n-row)){ cout<<" ";	++cnt;}
		cnt=1;
		while(cnt<=(2*row-1)){ cout<<"*"; ++cnt;}
		cout<<endl;
		++row;
	}
	while(row>0){
		int cnt =1;
		while(cnt<=(n-row)){ cout<<" ";		++cnt;}
		cnt=1;
		while(cnt<=(2*row-1)){ cout<<"*";	++cnt;}
		cout<<endl;
		--row;
	}
	return 0;
}