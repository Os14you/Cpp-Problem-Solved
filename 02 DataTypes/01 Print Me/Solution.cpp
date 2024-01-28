#include<iostream>
using namespace std;
int main()
{
	int a,b;
    cout<<"Enter A : ";
	cin>>a;
    cout<<"Enter B : ";
    cin>>b;
	int b_is_1 = a*a;
	int b_is_neg_1 = 2*a+1;
	int is_1 = (1+b)/2;
	int is_neg_1 = 1 - is_1;
	cout<<">> "<<is_1*b_is_1 + is_neg_1*b_is_neg_1;
	return 0;
} 