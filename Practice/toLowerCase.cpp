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
