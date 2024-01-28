#include<iostream>
using namespace std;
int main(){
	int num,cnt=0;
	cout<<"Input N : "; cin>>num;
	while(cnt<=num){
		if(cnt%8==0 || (cnt%3==0 && cnt%4==0))
			cout<<cnt<<" ";
		cnt++;
	}
	return 0;
}