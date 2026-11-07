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
void change(Car &c){   // pass by refrence hai ye . Agar ham & nahi use karenge to value copy hoga swapping ke tarah
	c.Model = "Audi";
}
int main(){
	Car c1;
	c1.Model = "Swift";
	c1.year = 2006;
	
	Car c2;
	c2.Model = "Alto";
	c2.year = 1999;
	
	print(c1);
	change(c1);
	print(c1);
	print(c2);
	return 0;
}
