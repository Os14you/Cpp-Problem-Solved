#include <iostream>
using namespace std;
int main(){
	int rows,cols,queries,i,j,r,c;
    bool is_not_prime[10000] {0};
    is_not_prime[0]=true;
    for(int i=1;i<10000;i++){
        for(int j=2;j<i;j++){
            if(!(i%j)){
                is_not_prime[i]=true;
                break;
            }
        }
    }
	cout<<"Enter the dimension of the matrix :"<<endl; cin>>rows>>cols;
	int arr[rows][cols];
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++)
			cin>>arr[i][j];
	}
    cout<<"Enter the number of queries :"<<endl; cin>>queries;
    while(queries--){
    int i,j,r,c;
    cout<<"Enter i & j & r & c :"<<endl; cin>>i>>j>>r>>c;
    int cnt=0;
    r+=i,c+=j;
    for(int x=i;x<r;x++){
        for(int y=j;y<c;y++){
            if(!is_not_prime[arr[x][y]]){
                cnt++;
            }
        }
    }
    cout<<cnt<<" primes in the selected rectangle"<<endl;
    }
	return 0;
}