#include <iostream>
using namespace std;
int main(){
	int rows,cols,maxvalue=-99999999,lr=0,lc=0;
	cout<<"Enter the dimensions of the matrix :"<<endl; cin>>rows>>cols;
	int arr[rows][cols];
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
			if(arr[i][j]>=maxvalue)
				maxvalue=arr[i][j],lr=i,lc=j;
		}
	}
	cout<<"The maximum value is "<<maxvalue<<" with occurrence "<<lr<<" "<<lc;
	return 0;
}