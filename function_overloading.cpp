#include<iostream>
using namespace std;
class student{
	public:
	int area(int r){
		return 3.14*r*r;
	}
	int area(int l , int b){
		return l*b;
	}
	
};
int main(){
	student s1;
	cout<<s1.area(7)<<endl;
	cout<<s1.area(3,4);
	return 0;
}
