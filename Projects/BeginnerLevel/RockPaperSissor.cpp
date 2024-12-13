#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
		
	//Convert String toLowerCase

		std::string toLowerCase(const std::string& str){
		std::string result = str;
		std::transform(result.begin(), result.end(), result.begin(), [](unsigned char c) {return std::tolower(c); });
		return result;
	}

	//main logic

int main(){
	std::string choice;
	std::cout << "Make your choice: rock paper or scissor" << std::endl;
	std::cin >> choice;

	choice = toLowerCase(choice);

	if(choice == "rock") {
			std::cout << "Computer chose paper" << std::endl;
			std::cout << "You Lose Please try again." << std::endl;
	} else if (choice == "paper") {
			std::cout << "Computer chose scissor" << std::endl;
			std::cout << "You Lose Please try again." << std::endl;
	} else {
			std::cout << "Computer chose rock" << std::endl;
			std::cout << "You Lose Please try again." << std::endl;
	}
	return 0;
}