#include<iostream>
using namespace std;
class Car{
	public:
	string Model;
	int year;
};
void print(Car c){   //Pass by value hai ye
	cout<<c.Model<<endl<<c.year<<endl;
}
int main(){
	Car c1;
	c1.Model = "Swift";
	c1.year = 2006;
	
	Car c2;
	c2.Model = "Alto";
	c2.year = 1999;
	print(c1);
	c2.print();
	print(c2);
	return 0;
}
