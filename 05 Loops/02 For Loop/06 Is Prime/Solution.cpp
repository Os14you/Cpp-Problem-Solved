#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Input : ";
	cin>>num;
	bool is_p=true;
	for(int x=2;x<num;x++){
		if(num%x == 0)
			is_p=false;
	}
	if(is_p)
		cout<<"yes,is prime .";
	else
		cout<<"No,is not prime .";
	return 0;
}