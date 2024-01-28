#include <iostream>
using namespace std;
int main(){
	int x,n1,n2,n3,n4,n5;
	cout<<"Input x : ";
	cin>>x;
    cout<<"Input num : "<<endl;
    cin>>n1>>n2>>n3>>n4>>n5;
	int bigger {0};
	bigger+= (n1 <= x);
	bigger+= (n2 <= x);
	bigger+= (n3 <= x);
	bigger+= (n4 <= x);
	bigger+= (n5 <= x);
	cout<<">> First Value : "<<bigger<<endl;
	cout<<">> Second Value : "<<5 - bigger<<endl;
	return 0;
}