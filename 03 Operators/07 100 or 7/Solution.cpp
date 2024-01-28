#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Input : ";
	cin>>num;
	bool is_odd = num%2;
	cout<<is_odd*7+(!is_odd)*100;
}