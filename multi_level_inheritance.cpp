#include<iostream>
using namespace std;
class car{
	public:
		car(){
			cout<<"I love cars"<<endl;
		}
};
class bike :public car{
	public:
		bike(){
			cout<<"I don't like bike so much"<<endl;
		}
};
class me :public bike{
	public:
		me(){
		}
};
int main(){
	me me1;
	return 0;
	
}
