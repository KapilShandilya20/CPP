#include<iostream>
using namespace std;

int main(){
	int n,i,j;
	std::cout << "Enter number: " << std::endl;
	std::cin >> n;

	for(i = 0; i < n;  i++){
		for (j = n; j > i ; j--)
		{
			std::cout << "* "; 
		}
		std::cout << endl;
	}
	return 0;
}