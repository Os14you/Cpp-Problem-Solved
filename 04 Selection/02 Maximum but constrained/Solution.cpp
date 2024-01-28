#include<iostream>
using namespace std;
int main() {
	int num1, num2, num3;
	cout<<"Input :"<<endl;
	cin >> num1 >> num2 >> num3;
	int res = -1;
	if (num1 < 100 && num1 > res)
		res = num1 ;
	if (num2 < 100 && num2 > res)
		res = num2;
	if (num3 < 100 && num3 > res)
		res = num3;
	cout<<">> "<<res;
	return 0;
}