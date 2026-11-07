#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
   
    Box(double w) : width(w) {}

   
    friend void printWidth(Box b);
};


void printWidth(Box b) {
    
    cout << "The width of the box is: " << b.width << endl;
}

int main() {
    Box myBox(15.5);
    
   
    printWidth(myBox); 
    
    return 0;
}
