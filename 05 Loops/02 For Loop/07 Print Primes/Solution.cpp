#include <iostream>
using namespace std;
int main()
{
	int max;
	cout<<"Input : ";
	cin>>max;
	for(int num=2;num<=max;num++){
		bool is_p=true;
		for(int i=2;i<num;i++){
		if(num%i==0){
			is_p = false;
			break;
		}}
		if (is_p)
			cout << num <<" ";
	}
	return 0;
}