#include<iostream>
using namespace std;
int main(){
	int n,cnt=0;
	float avg_odd = 0,avg_even = 0;
	cout<<"Input N : ";
	cin>>n;
	cout<<"Input "<<n<<" nums : ";
	while(cnt<n){
		int num;
		cin>>num;
		if(cnt%2 == 0)
			avg_odd+=num;
		else
			avg_even+=num;
		cnt++;
	}
	if(n%2){avg_odd/=(((n-1)/2)+1);  avg_even/=(n-1)/2;}
	cout<<">> The odd "<<avg_odd<<" >> The even : "<<avg_even;
	return 0;
}