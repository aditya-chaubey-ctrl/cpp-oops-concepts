#include<iostream>
using namespace std;
class student{
	public:
	int roll;
	string name;
	student(int roll, string name , float marks){
		this->marks = marks;
		this->name = name;
		this->roll = roll;
	}
	void display(){
		cout<<name<<endl<<roll<<endl<<marks<<endl;
	}
	void setmarks(float m){
		marks = m;
		
	}
	private:    // can be access in the class
		float marks;
		
};
int main(){
	student s1(65,"Aditya",9.5);
	s1.display();
	s1.setmarks(9.8);
	s1.display();
//	s1.name = "Aditya";
//	cout<<s1.name<< endl;
//	s1.roll = 65;
//	cout<<s1.roll;
//    s1.marks = 9.6; can't do nither we can't display

	return 0;
}
