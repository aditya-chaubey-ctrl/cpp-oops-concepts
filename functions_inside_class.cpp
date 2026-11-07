#include<iostream>
using namespace std;
class Criketer{
	public:
		
	string name;
	int run;
	float avg;
	Criketer(string n, int r, float a){
		name = n;
		run = r;
		avg = a;
	}
	
	void print(float matches){
		cout<<name<<endl<<run<<endl<<avg<<endl;
		cout<<matches<<endl;
	}
	
	
};
int main(){
	Criketer c1("Rohit sharma",18000,56);
	c1.print(18000/56);
	return 0;
}
