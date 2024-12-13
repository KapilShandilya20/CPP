#include <iostream>

int main(){
	char op;
	int a,b,out;

	std::cout << "Select operation: +|-|*|/ ";
	std::cin >> op;

	std::cout << "Enter your numbers: ";
	std::cin >> a >> b;

		switch(op) {
			//case1
			case '+':
				out = a+b;
			break;
			
			//case2
			case '-':
				out = a-b;
			break;
			
			//case3
			case '*':
				out = a*b;
			break;
			
			//case4
			case '/':
				out = a/b;
			break;
		}
			std::cout << out;
return 0;
}