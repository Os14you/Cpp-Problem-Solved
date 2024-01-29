#include <iostream>
using namespace std;
int main(){
	int rows,cols,sumRd=0,sumLd=0,sumLr=0,sumLc=0;
	cout<<"Enter the dimensions of the matrix :"<<endl; cin>>rows>>cols;
	int arr[rows][cols];
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
			if(i==j) sumLd+=arr[i][j];
            if(i+j==rows) sumRd+=arr[i][j];
            if(i==rows-1) sumLr+=arr[i][j];
            if(j==cols-1) sumLc+=arr[i][j];
		}
	}
    cout<<"The sum of the left  diagonal is "<<sumLd<<endl;
    cout<<"The sum of the right diagonal is "<<sumRd<<endl;
    cout<<"The sum of the last row is "<<sumLr<<endl;
    cout<<"The sum of the last column is "<<sumLc<<endl;
	return 0;
}