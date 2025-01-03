// Pallendrome Number or not

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int n,quo,rem,rev;
	cout << "Enter the number you want to check for Pallendrome: ";
	cin >> n;

	quo = n;
	rev = 0;

	while(quo != 0)  {
		rem = quo % 10;
		quo = quo/10;
		rev = (rev *10 ) + rem;
	}

	if(n == rev) {
		cout << "The number " << n << " " << "is a Pallendrome ";
	}
	else {
		cout << "The number " << n << " " << "is not a Pallendrome ";
	}
	return 0;
}