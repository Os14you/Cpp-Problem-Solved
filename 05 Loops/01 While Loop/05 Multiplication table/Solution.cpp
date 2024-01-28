#include<iostream>
using namespace std;
int main() {
	int num1,num2,start = 1;
	cout<<"Input 2 nums :\n";
	cin>>num1>>num2;
    cout<<"------------\n";
	while(start<num1){
		int startin = 1;
		while(startin<num2){
			cout<<start<<"×"<<startin<<"="<<start*startin<<endl;
			startin++;
		}
		start++;
	}
	return 0;
}