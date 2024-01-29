#include <iostream>
using namespace std;
int main(){
	string str;
    cout<<"Input : ";
    cin>>str;
    cout<<">> ";
    int freq[150]={0};
    for(int i=0;i<str.size();i++)
        freq[str[i]]++;
    for(int i='a';i<='z';i++){
        if(freq[i])
            cout<<(char)i<<" : "<<freq[i]<<" , ";
    }
	return 0;
}