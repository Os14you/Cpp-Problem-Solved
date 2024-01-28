#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Input : ";
	cin>>num;
	int re_num = 0;
	while(num>0){
		int l_digit = num%10;
		re_num= (re_num*10) +l_digit ;
		num/=10;
	}
	cout<<">> "<<re_num;
	return 0;
}