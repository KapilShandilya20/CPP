//1Dimention Array

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int i,size;
	
	// Array Size Defination
	cout << "Enter the size of Array: ";
	cin >> size;

	//Accepts elements in Array
	int n[size];
	for (i = 0; i < size; i++) {
        cout << "Enter a number: ";
        cin >> n[i];
    }

	//Displaying the Array
	cout << "The elements in the Array are: ";
	cout << "{";
	for(i = 0;i < size; i++) {
		cout << n[i] << " ";
	}
	cout << "}";
	cout<< endl;
	cout << "This is a 1D Array";
	return 0;

}