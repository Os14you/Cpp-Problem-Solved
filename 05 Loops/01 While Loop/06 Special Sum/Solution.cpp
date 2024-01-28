#include<iostream>
using namespace std;
int main(){
	int n,num,p=1,result=0;
	cout<<"Input N : ";
	cin>>n;
    cout<<"Input "<<n<<" nums : "<<endl;
	while(p<=n){
		cin>>num;
		int rep=1,value=1;
		while(rep<p){value*=num; rep++;}
		result+=value;
		p++;
	}
	cout<<"the result of the expresion is "<<result;
	return 0;
}