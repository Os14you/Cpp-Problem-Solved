#include <iostream>
using namespace std;
int main(){
	int index;
	int recaman[200],freq[200]={0};
	int expr1,expr2;
	recaman[0]=0;
	freq[0]=1;
	for(int i=1;i<200;i++){
		int last_value=recaman[i-1],last_indx=i-1;
		expr1 =last_value-last_indx-1;
		expr2 =last_value+last_indx+1;
		if(expr1>0 && !freq[expr1]){
			recaman[i]=expr1;
			freq[expr1]++;
		}
		else{
			recaman[i]=expr2;
			freq[recaman[i]]++;
		}
	}
	cout<<"Enter the index :"<<endl;  cin>>index;
	cout<<"The number is "<<recaman[index];
	return 0;
}