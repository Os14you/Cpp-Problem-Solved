#include <iostream>
using namespace std;
int main(){
	int num;
	float avg_odd=0,avg_even=0;
	cout<<"Input N : ";
	cin>>num;
    cout<<"Input "<<num<<" nums : "<<endl;
	for(int x=1;x<=num;x++){
		int num_;
		cin>>num_;
		if(x%2==1)
			avg_odd+=num_;
		else
			avg_even+=num_;
		}
	if(num%2==0)
		avg_odd/=(num/2);
	else
		avg_odd/=(num/2+1);
	avg_even/=(num/2);
	cout<<">> The even "<<avg_even<<endl;
	cout<<">> The odd "<<avg_odd<<endl;
	return 0;
}