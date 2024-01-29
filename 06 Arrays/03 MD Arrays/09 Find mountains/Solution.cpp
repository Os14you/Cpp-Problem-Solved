#include <iostream>
using namespace std;
int main(){
	int rows,cols;
	cout<<"Enter the dimension of the matrix :"<<endl; cin>>rows>>cols;
	int arr[rows][cols];
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++)
			cin>>arr[i][j];
	}
    //          { d,r , u,  l, ul, dr,ur, dl };
    int di[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
	int dj[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
    for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
            bool valid_mountain = true;	
			for (int d = 0;d < 8; ++d) {
				int ni = i + di[d];
				int nj = j + dj[d];
				if (ni < 0 || ni >= rows || nj < 0 || nj >= cols)
					continue;	// outside borders
				if (arr[i][j] <= arr[ni][nj]) {
					valid_mountain = false;
					break;
				}
			}
			if (valid_mountain)
				cout << i << " " << j << "\n";
        }
    }
	return 0;
}