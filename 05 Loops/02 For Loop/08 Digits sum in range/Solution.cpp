#include <iostream>
using namespace std;
int main(){
	int max,rst,rend,total=0;
	cout<<"Input N :"<<endl;	cin>>max;
	cout<<"Input A , B :"<<endl;	cin>>rst>>rend;
	for(int i=0;i<=max;i++){
		int sum_d=0;
		for(int tmp=i;tmp>0;tmp/=10)
			sum_d+= tmp%10 ;
		if(sum_d>=rst && sum_d<=rend)
			total+=i;
	}
	cout<<total;
	return 0;
}