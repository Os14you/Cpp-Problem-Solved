#include <iostream>
using namespace std;
int main(){
	int rows,cols,r=0,c=0,k;
	cout<<"Enter the dimension of the matrix :"<<endl; cin>>rows>>cols;
    cout<<"Enter k :"<<endl;
    cin>>k;
    while(k--){
        int d,steps;
        cout<<"Enter the direction and steps :"<<endl; cin>>d>>steps;
        if(d==1){
            while(steps--)  {if(--r==0)   r=rows;}
            cout<<r<<" "<<c<<endl;
            }
        else if(d==2){
            while(steps--)  c=(c+1)%cols;
            cout<<r<<" "<<c<<endl;
            }
        else if(d==3){
            while(steps--)  r=(r+1)%rows;
            cout<<r<<" "<<c<<endl;
            }
        else if(d==4) {
            while(steps--)  {if(--c==0)   c=cols;}
            cout<<r<<" "<<c<<endl;
            } 
    }
	return 0;
}