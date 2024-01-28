#include<iostream>
using namespace std;
int main() 
{
	int num,result,value;
	cout<<"Input N : "; cin>>num;
    cout<<"Input "<<num<<" nums : "<<endl;
	int cnt=0;
	cin>>result;
	while(cnt<num-1){
		cin>>value;
		if(value<result)
			result=value;
		cnt++;
	}
	cout<<">> "<<result;
	return 0;
}