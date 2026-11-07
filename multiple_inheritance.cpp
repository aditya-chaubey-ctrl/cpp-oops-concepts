#include <iostream>
using namespace std;
class Car {
public:
   Car() { cout << "Driving on land" << endl; }
};
class Boat {
public:
  Boat() { cout << "Sailing on water" << endl; }
};
class DualModeVehicle : public Car, public Boat {
public:
   
};
int main() {
   DualModeVehicle vehicle;
   
   return 0;
}
