#include <iostream>
using namespace std;
int main(){
	int numx;
	cout<<"Input :";
	for(;;){
		cin>>numx;
		if(numx%2==1)
			break;
		else
			cout<<"Try an odd number :"<<endl;
	}
    cout<<"-----------\n";
	for (int i = 0; i < numx; ++i) {
		for (int j = 0; j < numx; ++j) {
			if(i == j || numx-i-1 == j)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}