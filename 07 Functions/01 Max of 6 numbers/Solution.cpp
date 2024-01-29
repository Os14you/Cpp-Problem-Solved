#include <iostream>
#include <climits>
using namespace std;
int max_up_to_6(int a,int b,int c,int d = INT_MIN,int e= INT_MIN,int f = INT_MIN){
	int result=a;
	if(result<b) result=b;
	if(result<c) result=c;
	if(result<d) result=d;
	if(result<e) result=e;
	if(result<f) result=f;
	return result;
}
int main(){
	int num1,num2,num3,num4,num5,num6;
	cout<<"Enter 3 numbers :"<<endl;
	cin>>num1>>num2>>num3;
	cout<<"The maximum value is "<<max_up_to_6(num1,num2,num3)<<endl;
	cout<<"Enter the forth number :"<<endl;
	cin>>num4;
	cout<<"The maximum value is "<<max_up_to_6(num1,num2,num3,num4)<<endl;
	cout<<"Enter the fifth number :"<<endl;
	cin>>num5;
	cout<<"The maximum value is "<<max_up_to_6(num1,num2,num3,num4,num5)<<endl;
	cout<<"Enter the sixth number :"<<endl;
	cin>>num6;
	cout<<"The maximum value is "<<max_up_to_6(num1,num2,num3,num4,num5,num6)<<endl;
	return 0;
}