#include<iostream>
#include <map>
#include<set>
using namespace std;

int main() {
	int n;
	cout<<"Enter the number of names : "; cin>>n;
	map<string,set<string>> names;
	string str;
	while(n--){
		cout<<"Enter a name : ";
		cin>>str;
		for(int j=0;j<str.size();j++){
			names[str.substr(0,j)].insert(str);
		}
	}
	int q;
	cout<<"Enter the number of queries : "; cin>>q;
	for(int i=0;i<q;i++){
		cout<<"Enter a query : ";
		cin>>str;
		for(string it : names[str])
			cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}