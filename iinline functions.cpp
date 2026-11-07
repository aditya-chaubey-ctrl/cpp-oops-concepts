#include<iostream>
using namespace std;
inline int square(int a){
	return a*a;
}
int main(){
	int a ;
	cout<<"enter the valus of a = ";
	cin>>a;
	cout<<"The square of "<< a <<" is = ";
	cout<<square(a);
 return 0;
}
