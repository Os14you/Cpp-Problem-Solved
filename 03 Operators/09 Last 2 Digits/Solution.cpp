#include<iostream>
using namespace std;
int main() 
{
	long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long int l2d = (a%100)*(b%100)*(c%100)*(d%100);
    cout<<(l2d%100)/10<<(l2d%10);
	return 0;
}