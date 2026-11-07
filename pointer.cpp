#include<iostream>
using namespace std;
int main(){
	int x = 4;
	cout<<&x<<endl;  // access the address of the variable
	int* p = &x;   // use to define(make) a ponter
	cout<<p<<endl; 
	cout<< *p<<endl;     //use to access the value at the address of that variable
	*p = 100;
	cout<<x<<endl;
	return 0;
}
