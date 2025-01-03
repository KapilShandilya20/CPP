//Area of Circle

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int r;
	double PI = 3.14;
	double area;

	cout << "Enter the value of radius R: ";
	cin >> r;

	area = PI*r*r;

	cout << area;

	return 0;

}