#include<iostream>
using namespace std;
class Cricketer{
	public:
	string name;
	int runs;
	Cricketer(string name, int runs){
		this->name = name;
		this->runs = runs;    //   -> == (*p)
	}
};
void display(Cricketer c){
	cout<<c.name<<endl<<c.runs<<endl;
}
int main(){
	Cricketer c1("Rohit Sharma",1800);
	display(c1);	
	return 0;
}
