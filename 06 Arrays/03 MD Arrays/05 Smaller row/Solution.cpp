#include <iostream>
using namespace std;
int main(){
	int rows,cols;
	cout<<"Enter the dimensions of the matrix :"<<endl; cin>>rows>>cols;
	int arr[rows][cols];
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++)
			cin>>arr[i][j];
	}
    int queries;
    cout<<"Enter the number of the queries :"<<endl;  cin>>queries;
    while(queries--){
        int r1,r2;
        bool is_smaller=true;
        cout<<"Enter the query :"<<endl; cin>>r1>>r2;
        for(int i=0;i<cols;i++){
            if(arr[r1-1][i]>=arr[r2-1][i]){
                is_smaller=false;
                break;
            }
        }
        if(is_smaller)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
	return 0;
}