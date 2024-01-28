#include <iostream>
using namespace std;
int main(){
	int num,result=0;
	cout<<"Input : ";
	cin>>num;
	for(;num>0;){
		int digit = num%10;
		result=result*10+digit;
		num/=10;
	}
	cout<<">> "<<result<<endl;
	return 0;
}