// Detect that a year is LeapYear or Not

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int year;

	cout << "Enter the year: ";
	cin >> year;

	if(year % 100 != 0 && year %4 == 0) {
		cout << "The year " << year << " " << "is a Leap Year" << endl;
	}
	else{
		cout << "The year " << year << " " << "is not a Leap Year" << endl;
	}

	return 0;
}