//InsertionSort

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main(){
	int i, j, key, size;

	// Array Size Definition
	cout << "Enter the size of Array: ";
	cin >> size;

	// Accepts elements in Array
	int n[size];
	for (i = 0; i < size; i++) {
        cout << "Enter a number: ";
        cin >> n[i];
    }

	// Displaying the Array
	cout << "The elements in the Array are: ";
	for(i = 0; i < size; i++) {
		cout << n[i] << " ";
	}
	cout << endl;

	// Insertion Sort
	for(i = 1; i < size; i++) {
		key = n[i];
		j = i - 1;
		while(j >= 0 && n[j] > key) {
			n[j + 1] = n[j];
			j = j - 1;
		}
		n[j + 1] = key;
	}

	// Displaying Sorted Array
	cout << "Sorted array: ";
	for(i = 0; i < size; i++) {
		cout << n[i] << " ";
	}

	return 0;
}
