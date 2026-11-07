#include<iostream>
using namespace std;
class Student{   //Class = Blueprint
	public:
		string Name;
		int Roll_num;
		int Marks;
};
int main(){
	Student s1;  // object = instance
	s1.Name = "Aditya";
	s1.Roll_num = 65;
	cout<<"Enter the Marks";
	cin>>s1.Marks;
	cout<<s1.Name<<endl;
	cout<<s1.Roll_num<<endl;
	cout<<s1.Marks;
	return 0;
}

