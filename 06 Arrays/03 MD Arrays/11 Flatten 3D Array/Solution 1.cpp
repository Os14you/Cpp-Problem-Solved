#include <iostream>
using namespace std;
int main(){
	int depth,rows,cols,choice,indx=0;
	cout<<"Enter the dimensions d , r , c :"<<endl; cin>>depth>>rows>>cols;
    cout<<"Enter your choice :"<<endl; cin>>choice;
    int arr[depth][rows][cols];
    for(int i=0;i<depth;i++){
		for(int j=0;j<rows;j++){
			for(int c=0;c<cols;c++){
				arr[i][j][c]=indx++;
			}
		}
	}
    if(choice==1){
        int d,r,c;
        cout<<"Enter the position :"<<endl; cin>>d>>r>>c;
        cout<<arr[d][r][c];
    }
    else if(choice==2){
        int idx;
        cout<<"Enter the position :"<<endl; cin>>idx;
        for(int i=0;i<depth;i++){
		    for(int j=0;j<rows;j++){
			    for(int c=0;c<cols;c++){
				    if(arr[i][j][c] == idx) cout<<i<<" "<<j<<" "<<c;
			    }
		    }
	    }
    }
	return 0;
}