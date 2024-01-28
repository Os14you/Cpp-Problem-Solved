#include <iostream>
using namespace std;
int main(){
	int sizA;
	cout<<"Enter the size of the array :"<<endl; cin>>sizA;
	int arr[sizA];
	for(int i=0;i<sizA;i++)
		cin>>arr[i];
	int increase = sizA;
	for(int i=0;i<sizA;i++){
		for(int rep=i+1;rep<sizA;rep++){
			if(arr[rep]>=arr[rep-1])
				increase++;
			else
				break;
		}
	}
	cout<<"The increasing subarrays are "<<increase;
	return 0;
}