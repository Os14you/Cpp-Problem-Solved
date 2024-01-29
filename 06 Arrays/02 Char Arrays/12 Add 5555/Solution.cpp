#include <iostream>
using namespace std;
int main(){
	string num;
    cout<<"Enter the very long number : "; cin>>num;
    int size=num.size();
    int carry=0;
    for(int i=0;i<size;i++){
        int digit = num[size-i-1]-'0';
        if(i<4)
            digit+=5;
        digit+=carry;
        if(digit>=10)
            digit-=10,carry =1;
        else 
            carry= 0 ;
        num[size-i-1]=digit+'0';
    }
    cout<<">> "<<num;
    return 0;
}