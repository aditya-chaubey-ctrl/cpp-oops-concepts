#include<iostream>
using namespace std;
class animal{
	public:
		virtual void sound(){
			cout<<"Animal sound"<<endl;
		}
};
class Dog :public animal {
	public:
		void sound() override {
			cout<<"Dog bark"<<endl;
		}
};
int main(){
	animal *ptr;
	animal a;
	
	Dog d;
	ptr = &a;
	ptr->sound();
	
	ptr = &d;
	ptr->sound();
	return 0;
}
