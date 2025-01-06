//2-Dimentions Array

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int i,j,rows,cols;
// Array Size Defination
	cout << "Enter the number of rows of Array: ";
	cin >> rows;
	cout << "Enter the number of columns of Array: ";
	cin >> cols;

	int matrix[rows][cols];

//Accepts elements in Array
	for(i = 0; i < rows; i++) {
		for(j = 0; j < cols ; j++) {
			cout << "Enter Elements at: [ " << i << "] [" << j << "]";
			cin >> matrix[i][j];
		}
	}

// Display the 2D Array
    cout << "The Array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}