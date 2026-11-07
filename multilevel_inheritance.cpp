#include<iostream>
using namespace std;
class Apple{
	public:
	Apple(){
		cout<<"very expensive"<< endl;
	}
};
class Orange :public Apple{
	public:
	Orange(){
		cout<<"The color of orange is orange";
	}
};
class Blueberry :public Orange{
	public:
	
};
int main(){
	Blueberry b;
	return 0;
}
