//SWAP 2 NUMBERS


#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int a,b,temp;
	cout << "Enter value of A: ";
	cin >> a;
	cout << "Enter value of B: ";
	cin >> b;

	cout << "Before swapping." << endl;
    cout << "A = " << a << ", B = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "A = " << a << ", B = " << b << endl;

    return 0;
}