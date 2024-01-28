#include <iostream>
using namespace std;
int main(){
	int n,k,last_pos=0;
	bool is_removed[201]={0};
	cout<<"Enter the size of the group :"<<endl; cin>>n;
	cout<<"Enter the number of steps :"<<endl; cin>>k; 
	for(int i=0;i<n;i++){
		int steps=0,last_person=-1;
	  while(steps<k){
			if(is_removed[last_pos]==0)
				last_person=last_pos,steps++;
			last_pos=(last_pos+1)%n;
		}
		is_removed[last_person]=1;
		cout<<last_person+1<<" ";
	}
	return 0;
}