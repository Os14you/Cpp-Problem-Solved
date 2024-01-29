#include<iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
	int n_names;
	cout<<"Enter the number of names : "; cin>>n_names;
	map<string,vector<string>> map_data;
	for(int i=0;i<n_names;i++){
		int len;
		cout<<"Enter the len of the full name : ";
		cin>>len;
		cout<<"Enter the name :-"<<endl;
		vector<string> names;
		string str,cur_full_name="";
		for(int j=0;j<len;j++){
			cin>>str;
			if(j)
				cur_full_name+=" ";
			cur_full_name+=str;
			names.push_back(cur_full_name);
		}
		for(auto str : names)
			map_data[str].push_back(cur_full_name);
	}
	int n_queries;
	cout<<"Enter the number of queries : ";
	cin>>n_queries;
	for(int i=0;i<n_queries;i++){
		int len;
		cout<<"Enter the length of the full name : ";
		cin>>len;
		cout<<"Enter the name :-"<<endl;
		vector<string> names;
		string str,cur_full_name="";
		for(int j=0;j<len;j++){
			cin>>str;
			if(j)
				cur_full_name+=" ";
			cur_full_name+=str;
		}
		int num = 1;
		for(auto str : map_data[cur_full_name])
			cout<<num++<<". "<<str<<endl;
	}
	return 0;
}