#include <iostream>
using namespace std;
int num_operations=0;
int menu(){
	int choice=-1;
	cout<<"************************************\n"<<"1.Add 2 numbers\n"<<"2.Subtract 2 numbers\n"<<"3.Multiply 2 numbers\n"
	<<"4.Divide 2 numbers\n"<<"5.End the program\n"<<"your choice : ";
	while(true){
		cin>>choice;
		if(choice>=1 && choice<=5){
			if(choice!=5) num_operations++;
			return choice;
		}
		else{
			cout<<"Try a valid option !"<<endl;
			continue;
		}
	}
}
void read_nums(float a,float b){
	cout<<"Enter the two numbers :\n"; 
	cin>>a>>b;
}
float Add(float num1, float num2){
	return (num1+num2);
}
float Subtract(float num1, float num2){
	return (num1-num2);
}
float Multiply(float num1, float num2){
	return (num1*num2);
}
void Divide(){
	while(true){
		float num1,num2;
		cin>>num1>>num2;
		if(num2==0)
			cout<<"Invalid input . The second number is 0 Try again :"<<endl;
		else{
			cout<<"Result is "<<(num1/num2)<<endl; 
			break;
		}
	}
}
int calcuSystem(){
	while(true){
		int option = menu();
		float num1,num2;
		switch(option){
			case 1 : read_nums(num1,num2); cout<<"Result is "<<Add(num1,num2)<<"\n"; break;
			case 2 : read_nums(num1,num2); cout<<"Result is "<<Subtract(num1,num2)<<"\n"; break;
			case 3 : read_nums(num1,num2); cout<<"Result is "<<Multiply(num1,num2)<<"\n"; break;
			case 4 : cout<<"Enter the two numbers :\n"; Divide(); break;
			case 5 : cout<<"The number of oprations done is "<<num_operations; return 0;
		}
	}
}
int main(){
	calcuSystem();
	return 0;
}