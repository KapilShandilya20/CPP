// Print a Reverse of entered number

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int n,quo,rem;
	cout << "Enter the number you want to be reversed: ";
	cin >> n;

	quo = n;
	while(quo != 0) {
		rem =  quo % 10;
		quo = quo / 10;
		cout << rem;
	}
		cout << " " << "is the reversed number";
	return 0;
}