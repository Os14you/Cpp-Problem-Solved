#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Input : ";
	cin>>num;
	int ld = num%10;//the result is the last digit
	bool is_even = (num==0 || num==2 || num==4 || num==6 || num ==8);
	bool is_odd = !is_even;
	cout<<"the num is even = "<<is_even<<" ,the num is odd = "<<is_odd;
	return 0;
}