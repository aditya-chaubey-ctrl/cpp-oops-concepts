#include<iostream>
using namespace std;
template<class T>
T average(T a , T b){
	return (a+b)/2;
}
int main(){
	cout<<average(23,45)<<endl;
	cout<<average(34.5 , 67.8);
	return 0;
}
