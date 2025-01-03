// SWAP 2 NUMBERS WITHOUT TEMP

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int a,b;

	cout << "Enter value of A: ";
	cin >> a;
	cout << "Enter value of B: ";
	cin >> b;

	cout << "Before swapping." << endl;
    cout << "A = " << a << ", B = " << b << endl;

    a = a+b;
    b = a-b;
    a = a-b;


    cout << "\nAfter swapping." << endl;
    cout << "A = " << a << ", B = " << b << endl;

    return 0;
}