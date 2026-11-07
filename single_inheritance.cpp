#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "This animal is eating." << endl;
    }
};


class Dog : public Animal {
public:
    
};

int main() {
	
    Dog myDog;
    return 0;
}

