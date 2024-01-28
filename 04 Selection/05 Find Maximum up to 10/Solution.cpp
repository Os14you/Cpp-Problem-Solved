#include<iostream>
using namespace std;
int main() 
{
	int cnt, result, num;
	cout<<"Input N : ";
	cin>>cnt;
	cout<<"Input "<<cnt<<" nums :"<<endl;
	cin>>result;// First number
	cnt--;
	if(cnt > 0)	{cnt--;	cin>>num;	if(result < num)	result = num;	}
	if(cnt > 0)	{cnt--;	cin>>num;	if(result < num)	result = num;	}
	if(cnt > 0)	{cnt--;	cin>>num;	if(result < num)	result = num;	}
	if(cnt > 0)	{cnt--;	cin>>num;	if(result < num)	result = num;	}
	if(cnt > 0)	{cnt--;	cin>>num;	if(result < num)	result = num;	}
	if(cnt > 0)	{cnt--;	cin>>num;	if(result < num)	result = num;	}
	if(cnt > 0)	{cnt--;	cin>>num;	if(result < num)	result = num;	}
	if(cnt > 0)	{cnt--;	cin>>num;	if(result < num)	result = num;	}
	if(cnt > 0)	{cnt--;	cin>>num;	if(result < num)	result = num;	}
	cout<<">> "<<result;
	return 0;
}