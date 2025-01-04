// Sum of all Array Elements

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int i,size;

	cout << "Enter the size of Array: ";
	cin >> size;

	int n[size];
	for(i=0;i < size; i++) {
	cout << "Enter the Element: ";
	cin >> n[i];
	}

	cout << "Elements in the Array are: ";
	for(i = 0;i < size ;i++) {
	cout << n[i] << " ";
	}
	cout << endl;

	int sum = 0;
	for(i = 0; i < size; i++) {
		sum = sum + n[i];
	}
	cout << "The sum of all the Elements in the Array is: " << sum ;

	return 0;
}