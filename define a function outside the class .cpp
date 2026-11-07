#include<iostream>
using namespace std;
class student{
	public:
		int roll_num;
		string name;
		student(int roll_num, string name){
			this->roll_num = roll_num;
			this->name = name;
		}
		void display();
};
void student :: display(){
cout<<name<<endl<<roll_num<<endl;
}
int main(){
	student s1(65,"Aditya");
	s1.display();
	return 0;
}
