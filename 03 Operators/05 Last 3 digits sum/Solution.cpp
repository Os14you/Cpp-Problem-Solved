#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Input : ";
	cin>>num;
	int d1 = num - (num/10)*10;
	int d2 = (num - (num/100)*100)/10;
	int d3 = (num - (num/1000)*1000)/100;
	cout<<">> "<<d1+d2+d3;
}