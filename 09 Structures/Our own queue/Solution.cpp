#include <iostream>
using namespace std;

struct queue {
	int arr[100];
	int added;
	queue(){
		added=0;
	}
	void add_end(int num){
		arr[added++]=num;
		for(int i = 0;i<added;i++){
			if(!(arr[i]==-11110001))
				cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	void add_front(int num){
		for(int i=++added;i>0;i--){
			arr[i]=arr[i-1];
		}
		arr[0]=num;
		for(int i = 0;i<added;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	int remove_front(){
		int ret = arr[0];
		for ( int i = 0 ; i < --added ; ++i )
			arr[i]=arr[i+1];
		return ret;
	}
	void print(){
		for(int i = 0;i<added;i++)
			cout<<arr[i]<<" ";
		cout<<"\n";
	}
	
};

int main(){
	queue my_queue;
	my_queue.add_end(5); // output:  5
	my_queue.print();    //output : 5
	my_queue.add_end(17);
	my_queue.add_front(1);
	my_queue.remove_front();
	my_queue.print();
	return 0;
}