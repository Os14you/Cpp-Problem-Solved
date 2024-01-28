#include<iostream>
using namespace std;
int main(){
	int num,cnt=0;
	cout<<"Input N : "; cin>>num;
	int cont=0;
    cout<<">> ";
	while(cont<num){
		if(cnt%3==0 && !(cnt%4==0)){cout<<cnt<<" ";cont++;}
		cnt++;
	}
	return 0;
}