//SelectionSort

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main(){
	int i, j, minIndex, size;

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

	// Selection Sort
	for(i = 0; i < size - 1; i++) {
		minIndex = i;
		for(j = i + 1; j < size; j++) {
			if(n[j] < n[minIndex]) {
				minIndex = j;
			}
		}
		if(minIndex != i) {
			swap(n[i], n[minIndex]);
		}
	}

	// Displaying Sorted Array
	cout << "Sorted array: ";
	for(i = 0; i < size; i++) {
		cout << n[i] << " ";
	}

	return 0;
}
