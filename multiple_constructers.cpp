#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	int roll;
	int marks;
	
	Student(){
	}
	
	Student(string n, int r, int m){
		name = n;
		roll = r;
		marks = m;
	}
	
	Student(int r, int m){
		roll = r;
		marks = m;
	} 
	
};
void display(Student s){
	cout<<s.name<<endl<<s.roll<<endl<<s.marks<<endl;
}
int main(){
	Student s1("Aditya",65,99);
	display(s1);
	
	Student s2(57,100);
	s2.name = "Adarsh";
	display(s2);
	
	Student s3;
	s3.name = "Palak";
	s3.roll = 55;
	s3.marks = 98;
	display(s3);
	
	
	return 0;
}
