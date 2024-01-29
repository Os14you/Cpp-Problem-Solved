#include <iostream>
using namespace std;
int main(){
	int n,sum_upper=0,sum_lower=0;
	cout<<"Enter the dimension of the matrix :"<<endl; cin>>n;
	int arr[n][n];
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
            if(i>=j) sum_lower+=arr[i][j];
            if(j>=i) sum_upper+=arr[i][j];
        }
	}
    cout<<"The sum of the lower triangle is "<<sum_lower<<endl;
    cout<<"The sum of the upper triangle is "<<sum_upper<<endl;
	return 0;
}