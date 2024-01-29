#include <iostream>
using namespace std;
int main() {
	string str;
    cout << "Enter a string: "; cin>>str;
    cout<<">> ";
    char last_element = str[0];
    for(int i=0;i<str.size();i++){
        if(str[i]==last_element)
            cout<<str[i];
        else{
            last_element=str[i];
            cout<<" "<<last_element;
        }
    }
	return 0;
}