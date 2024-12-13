#include <iostream>

int main() {
	int a,b,result,result1,result2,result3,result4,result5;

	result = 5 & 3;
	std::cout << result << std::endl;

	result1 = 5 | 3;
	std::cout << result1 << std::endl;
	
	result2 = 5 ^ 3;
	std::cout << result2 << std::endl;
	
	result3 = ~5;
	std::cout << result3 << std::endl;
	
	result4 = 5 << 3;
	std::cout << result4 << std::endl;
	
	result5 = 5 >> 3;
	std::cout << result5 << std::endl;

	return 0;
}