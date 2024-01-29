#include <iostream>
using namespace std;
int len_sequence(int num){
	static int len=0;
	len++;
	if(num == 1)
		return len;
	if(num%2==0)
		len_sequence(num/2);
	else
		len_sequence(3*num+1);
}
int main(){
	cout<<len_sequence(9);
	return 0;
}