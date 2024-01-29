#include <iostream>
using namespace std;
int sequence(int num){
	cout<<num<<" ";
	if(num == 1)
		return num;
	if(num%2==0)
		sequence(num/2);
	else
		sequence(3*num+1);
}
int main(){
	sequence(9);
	return 0;
}