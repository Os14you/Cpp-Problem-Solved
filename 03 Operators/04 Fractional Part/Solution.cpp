#include<iostream>
using namespace std;
int main()
{
	float result;
	float num1,num2;
	cout<<"Input num1 : ";
	cin>>num1;
    cout<<"Input num2 : ";
	cin>>num2;
	result = num1/num2;
	result -=(int)result;//remove the int part
	cout<<">> "<<result;
	return 0;
}