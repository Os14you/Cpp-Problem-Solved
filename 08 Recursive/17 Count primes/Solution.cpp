#include<iostream>
using namespace std;
bool is_prime(int num,int crt_check_num = 3){
	if(num==2) return true;
	if(num<=1 || num%2==0) return false;
	if(num==crt_check_num) return true;
	if(num%crt_check_num==0) return false;
	return is_prime(num,crt_check_num+1);
}
int count_primes(int start, int end){
	if(start>end) return 0;
	int result = count_primes(start+1,end);
	if(is_prime(start))
		result++;
	return result;
}
int main() {
	cout<<count_primes(10,20)<<endl;
	cout<<count_primes(10,200)<<endl;
	//cout<<count_primes(10,5000000)<<endl;
	return 0;
}