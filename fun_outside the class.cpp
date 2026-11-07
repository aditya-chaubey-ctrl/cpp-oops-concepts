#include <iostream>
using namespace std;
class student {
	public:
		int roll;
		string name;
		void getdata();
		void display();
};
void student::getdata(){
	cout<<"enter the roll num: ";
	cin>>roll;
	cout<<"enter the name: ";
	cin>>name;
}
void student::display(){
	cout<<roll<<endl<<name;
}
int main(){
	student s;
	s.display();
	s.getdata();
	return 0;
}
