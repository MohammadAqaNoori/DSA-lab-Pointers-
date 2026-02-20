#include <iostream>
using namespace std;

int main() {
    int age = 25;       // normal variable
    int* ptr = &age;    // pointer storing the address of age

    cout << "Value of age      : " << age << endl;  // 25
    cout << "Address of age    : " << &age << endl;  // 0x1001 (some address)
    cout << "Value of ptr      : " << ptr << endl;  // 0x1001 (same address!)
    cout << "Value ptr points to: " << *ptr << endl;  // 25
    cout << *ptr << endl;

	*ptr = 30; // change the value of age through the pointer
	cout << "New value of age: " << age << endl;  // 30


	double price = 19.99;
	double* pricePtr = &price; // pointer to double
	cout << pricePtr << endl; // address of price

    return 0;
}