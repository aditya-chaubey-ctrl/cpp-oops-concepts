#include<iostream>
using namespace std;
class result{
	public:
		int maths ;
		int phy;
		int code;
		
		result(int maths, int phy, int code){
			this->maths= maths;
			this->phy = phy;
			this->code = code;
		}
		void display(){
			cout<<maths<<endl<<phy<<endl<<code<<endl;
		}
};
void change(result* r){
	(*r).phy = 56;      //(*r) = derefrence operator
	//or c->phy = 76;   still this works
}
int main(){
	result r1(23,24,25);
	
	r1.display();
	result* p1 = &r1;
	cout<<p1<<endl;
	p1->maths = 26 
//	(*p1).maths = 26; 	// or  p1->maths = 26 
	r1.display(); 
	change(&r1);
	cout<<r1.phy;
	return 0;
}
