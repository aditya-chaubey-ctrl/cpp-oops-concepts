//#include<iostream>
//using namespace std;
//int main(){
//	int* p = new int(23);   //space complexity kam hai    ek variable bnaye bina hi kahi num sore hai 
//	cout<<*p;
//	int* ptr = new int[5];
//	cout<<"Enter the elements of the elements";
//	for(int i = 0; i<5;i++){
//		cin>>ptr[i]<<endl;
//	}
//	return 0;
//}

#include <iostream>
using namespace std;

int main() {
    int* p = new int(23);

    cout << *p << endl;

    int* ptr = new int[5];

    cout << "Enter the elements: ";

    for (int i = 0; i < 5; i++) {
        cin >> ptr[i];
    }

    cout << "Elements are: ";

    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }

    delete p;
    delete[] ptr;

    return 0;
}
