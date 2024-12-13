#include <iostream>

int main() {
	int a;
	std::cout<< "Enter your number: ";
	std::cin >> a;
	if(a%2 == 0) {
		std::cout << a <<" is Even";
	} else {
			std::cout << a << " is Odd"; 
	}
	return 0;
}