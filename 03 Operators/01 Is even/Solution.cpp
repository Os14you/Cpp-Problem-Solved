#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Input : ";
	cin>>num;
	int is_odd = num%2;
	int is_even = !is_odd;
	cout<<">> "<<is_odd;
	return 0;
}