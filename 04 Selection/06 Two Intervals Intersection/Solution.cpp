#include<iostream>
using namespace std;
int main() 
{
	int s1, e1, s2, e2;
	cout<<"Input :"<<endl;
	cin >> s1 >> e1 >> s2 >> e2;
	if(e1 < s2 || e2 < s1)
		cout<<">> "<<-1<<"\n";	
	else{
		// The intersection starts at the maximum of the starts
		// The intersection ends at the minimum of the ends
		if(s1 < s2)	s1 = s2;	// maximum of (s1, s2)
		if(e1 > e2) e1 = e2;	// minimum of (e1, e2)
		cout<<">> "<<s1<<","<<e1;
	}
	return 0;
}