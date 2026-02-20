#include <iostream>
using namespace std;
int main() {
	int age = 25;
	// normal variable
	int* ptr = &age;
	// pointer storing the address of age
	double price = 19.99;
	// another normal variable of a different type

	double* pricePtr = &price;
	// pointer storing the address of price
	cout << *ptr << endl; // 25
	cout << *pricePtr << endl; // 19.99
}