#include<iostream>
using namespace std;
class Car{
	public:
		string name;
		int year;
		Car(){
		}
		Car(string n, int y){
			name = n;
			year = y;
		}
		
};
void display(Car c){
	cout<<c.name<<endl<<c.year<<endl;
	
}
int main(){
	Car c1("Bugati", 2006);
	display(c1);
	
	Car c2(c1); //Copy constructer
	display(c2);
	return 0;
}
