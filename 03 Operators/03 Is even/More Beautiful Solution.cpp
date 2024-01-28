#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Input : "<<endl;
	cin>>num;
	float x = num/2.0; //the result is X.0 or X.5
	x = x - (int)x;    // remove the intger value
	bool is_even = (x==0);
	bool is_odd = !is_even;
	cout<<"the num is even = "<<is_even<<" ,the num is odd = "<<is_odd;
	return 0;
}