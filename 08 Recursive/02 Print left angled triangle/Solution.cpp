#include <iostream>
using namespace std;
void triangle(int levels){
	if(levels == 0)
		return;
	triangle(levels-1); 
	for(int i=0;i<levels;i++)
		cout<<"*";
	cout<<"\n";
}
int main(){
	triangle(6);
	return 0;
}