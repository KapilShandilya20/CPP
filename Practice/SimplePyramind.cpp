#include<iostream>
using namespace std;

int main() {
	int i,j,n;
	std::cout << "Enter number: " << std::endl;
	std::cin >> n;

	for (i = 0; i< n; i++)
	{
		for (j = 0; j <= i ; j++)
		{
			std::cout << "* ";
		}
		std::cout << std::endl;
	}
	return 0;
}