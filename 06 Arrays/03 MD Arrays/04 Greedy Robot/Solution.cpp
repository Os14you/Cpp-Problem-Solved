#include <iostream>
using namespace std;
int main(){
	int rows,cols,robot=0;
	cout<<"Enter the dimensions of the matrix :"<<endl; cin>>rows>>cols;
	int arr[rows][cols];
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++)
			cin>>arr[i][j];
	}
    robot+=arr[0][0];
    int i=0,j=0;
    while(i<rows-1 && j<cols-1){
        if(arr[i][j+1]>=arr[i+1][j] && arr[i][j+1]>arr[i+1][j+1])
            robot+=arr[i][++j];
        else if(arr[i+1][j]>=arr[i][j+1] && arr[i+1][j]>arr[i+1][j+1])
            robot+=arr[++i][j];
        else 
            robot+=arr[++i][++j];
    }
    cout<<"Robot's collection is "<<robot;
	return 0;
}