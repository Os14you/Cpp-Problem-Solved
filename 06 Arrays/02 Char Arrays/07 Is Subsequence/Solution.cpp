#include <iostream>
using namespace std;
int main() {
	string str,subseq;
  	bool is_sub = false;
    int next=0;
  	cout<<"Enter the main string : "; cin>>str;
  	cout<<"Enter the subsequence : "; cin>>subseq;
	if(str.size()<subseq.size())
        is_sub = false;
    for(int i=0;i<str.size();i++){
        if(str[i]==subseq[next]){
            next++;
            if(next==subseq.size())
                is_sub=true;
        }
    }
  	if(is_sub)
		cout<<">> Yes";
  	else
    	cout<<">> No";
	return 0;
}