//COMPARE 2 DISTINCT NUMBERS

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

	if(a > b){
		cout << "number " << a << "is Greater than" << b << endl;
	}

	if(a < b){
		cout << "number " << b << "is Greater than" << a << endl;
	}

	else if(a = b){
		cout << "number " << a << "is Equal to" << b << endl;
	}

	return 0;
}