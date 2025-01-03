// find Factorrial of the number

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int n,i;
	cout << "Enter value of n: ";
	cin >> n;
	int fact = 1;
	for(i = 1  ;i<= n; i++) {
		fact *= i;
	}

	cout << "The factorial of "<< n <<" is: " << fact; 
	return 0;
}