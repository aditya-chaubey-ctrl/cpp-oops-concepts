#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	int roll;
	float gpa;
	Student(){ // DEFAULT CONSTRUCTER  (AUTOMATIC RAHTA HAI JAB TAK HAM NEW CONSTRUCTER NA BNA LE )
	}
	Student(string s,int r, float g){  // PARAMETRISE CONSTRUCTER
		name = s;
		roll = r;
		gpa = g;
	}
};
void display(Student s){
	cout<<s.name<<endl<<s.roll<<endl<<s.gpa<<endl;
}
int main(){
	Student s1("Aditya",65,8.9);
	display(s1);
	Student s2;
	s2. name = "Adarsh";   // this is due to default constructer
	s2.roll = 57;  // this is not by default constructer
	s2.gpa = 9.8;
	display(s2);
	Student s3;
	s3 = s1;
	display(s3);
	return 0;
}
