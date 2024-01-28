#include <iostream>
using namespace std;
int main(){
	int num,min,value;
	cout<<"Input N :";
	cin>>num;
    cout<<"Input "<<num<<" nums :\n";
	cin>>min;
	for(int x=1;x<num;x++){
		cin>>value;
		if(value<min)
			min=value;
		}
	cout<<"the minimum value is "<<endl;
	return 0;
}