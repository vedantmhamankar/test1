#include<iostream>
using namespace std;
int addition(int a,int b){
	cout<<a+b;
}
int multiply(int a,int b){
	cout<<"\n"<<a*b;
}
int main(){
	int x,y;
	cout<<"enter number:";
	cin>>x>>y;
	addition(x,y);
	multiply(x,y);
}
