#include<iostream>
using namespace std;
template <class T>
class add{
	public:
	T a;
	T b;
	
	add(T a , T b){
		this->a = a;
		this->b = b;
	}
	
	T sum(){
		return a + b;
	}
};
int main(){
	add<int> a(23,34);
	cout<<a.sum()<<endl;
	add<float> b(34.4f,55.4f);
	cout<<b.sum()<<endl;
	
	return 0;
}
