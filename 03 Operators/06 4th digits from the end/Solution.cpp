#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Input : ";
	cin>>num;
	int digit = (num - (num/10000)*10000)/1000;
	cout<<">> "<<digit;
}