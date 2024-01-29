#include<iostream>
using namespace std;
int dr[3]={1,0,1};
int dc[3]={0,1,1};
int path_sum(int grid[100][100],int ROWS, int COLS,int row=0, int col=0){
	int sum = grid[row][col];
	if(row==ROWS-1 && col==COLS-1) return sum;
	int max_indx=-1,max_value=-10000000;
	for (int i = 0 ;i < 3; ++i ){
		int new_col = col + dc[i];
		int new_row = row + dr[i];
		if(new_row >= ROWS || new_col >= COLS) continue;
		if(max_value < grid[new_row][new_col])
			max_value = grid[new_row][new_col],max_indx=i;
	}
	int new_col = col + dc[max_indx];
	int new_row = row + dr[max_indx];
	return sum + path_sum(grid,ROWS,COLS,new_row,new_col);
}

int main() {
	int arr[100][100]={{1,7,8},{2,10,11},{20,5,9}};
	cout<< "The maximum sum of the paths is: "<<path_sum(arr,3,3);
	return 0;
}