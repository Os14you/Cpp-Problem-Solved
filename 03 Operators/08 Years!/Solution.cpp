#include<iostream>
using namespace std;
int main() {
	int days;
    cout<<"Input : ";
	cin >> days;
	int years = days / 360;
	days = days % 360;	//removing the # of complete years
	int months = days / 30;
	days = days % 30;   //removing the # of complete months
	cout<<">> "<<years<<" "<<months<<" "<<days<<"\n";
	return 0;
}