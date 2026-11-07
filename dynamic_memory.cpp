#include<iostream>
using namespace std;
class Car{
	public:
		string Name;
		int year;
		Car(){
		}
		
		Car(string Name, int year){
		this->Name = Name;
		this->year = year;
		}
		void display(){
			cout<<Name<<endl<<year<<endl;
		}
	
};
int main(){
	Car c1("honda",2000);
	c1.display();
	Car* c2 = new Car("Maruti",2006);
	(*c2).display();
	return 0;
}
