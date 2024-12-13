#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
		
	//Convert String toUpperCase

		std::string toUpperCase(const std::string& str){
		std::string result = str;
		std::transform(result.begin(), result.end(), result.begin(), [](unsigned char c) {return std::toupper(c); });
		return result;
	}
