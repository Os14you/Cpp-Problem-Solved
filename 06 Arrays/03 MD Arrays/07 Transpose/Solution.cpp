#include <iostream>
using namespace std;
int main(){
	int rows,cols;
	cout<<"Enter the dimension of the matrix :"<<endl; cin>>rows>>cols;
	int arr1[rows][cols],arr2[cols][rows];
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++)
			cin>>arr1[i][j];
	}
    for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++)
			arr2[j][i]=arr1[i][j];
	}
    for(int i=0;i<cols;i++){
		for(int j=0;j<rows;j++){
			cout<<arr2[i][j]<<" ";
            if(j==rows-1) cout<<"\n";
        }
	}
	return 0;
}