#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Input : ";
	cin>>num;
	int is_odd = num%2;
	int is_even = !is_odd;
	cout<<"the num is even = "<<is_even<<" ,the num is odd = "<<is_odd;
	return 0;
}