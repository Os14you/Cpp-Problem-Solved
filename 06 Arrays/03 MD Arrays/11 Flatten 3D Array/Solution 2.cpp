#include<iostream>
using namespace std;
int main() {
	int Depth, Rows, Cols, type;
	int d, r, c, idx;
	cin >> Depth >> Rows >> Cols >> type;
	if (type == 1) {
		cin >> d >> r >> c;
		idx = d * (Rows * Cols) + r * Cols + c;
		cout << idx << "\n";
	} else {
		cin>>idx;
		d =  idx / (Rows * Cols);
		r = (idx % (Rows * Cols)) / Cols;
		c = (idx % (Rows * Cols)) % Cols;
		cout << d << " " << r << " " << c << "\n";
	}

	return 0;
}