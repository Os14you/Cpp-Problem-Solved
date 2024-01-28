// Dr. Moustafa Saad Solution

#include<iostream>
using namespace std;
int main() 
{
	int num1, num2, num3, tmp;
	cout<<"Enter your numbers :"<<endl;
	cin >> num1 >> num2 >> num3;
	if (num2 < num1) {
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	if (num3 < num2) { 
		tmp = num2;
		num2 = num3;
		num3 = tmp;	
		if (num2 < num1) {
			tmp = num1;
			num1 = num2;
			num2 = tmp;
		}
	}
	cout<<"sorted : "<<num1<<","<<num2<<","<<num3<<"\n";
	return 0;
}
