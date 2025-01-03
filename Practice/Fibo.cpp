//print Fibonacci series till n

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int a,b,c,n,i;

	cout << "Enter the value of n: ";
	cin >> n;

	a = 0;
	b = 1;
	c = 0;

	while(c <= n) {
		cout << c << endl;
		c = a+b;
		a = b;
		b = c;
	}

	return 0;
}