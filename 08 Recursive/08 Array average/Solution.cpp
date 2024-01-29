#include<iostream>
using namespace std;
double average(int arr[], int len){
	if(len==1) return arr[0];
	double sub_result = average(arr, len - 1);
	sub_result = sub_result * (len-1); // sum = average * len
	return (sub_result + arr[len - 1] ) / len;
}
int main() {
	int array[5]={1,8,2,10,3};
	cout<<average(array,5);
	return 0;
}