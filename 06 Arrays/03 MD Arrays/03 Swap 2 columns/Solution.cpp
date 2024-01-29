#include <iostream>
using namespace std;
int main(){
	int rows,cols,ind1,ind2;
	cout<<"Enter the dimensions of the matrix :"<<endl; cin>>rows>>cols;
	int arr[rows][cols];
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++)
			cin>>arr[i][j];
	}
    cout<<"Enter the two indices :"<<endl; cin>>ind1>>ind2;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(j==ind1)
                arr[i][ind1]=arr[i][ind2]+arr[i][ind1],arr[i][ind2]=arr[i][ind1]-arr[i][ind2],arr[i][ind1]=arr[i][ind1]-arr[i][ind2];
            cout<<arr[i][j]<<" ";
            if(j==cols-1)
                cout<<"\n";
        }
    }
	return 0;
}