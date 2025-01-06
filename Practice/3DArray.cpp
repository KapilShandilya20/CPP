//3-Dimention Array

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int i,j,k,blocks,rows,cols;
// Array Size Defination
	cout << "Enter the number of rows of Array: ";
	cin >> rows;
	cout << "Enter the number of columns of Array: ";
	cin >> cols;
	cout << "Enter the number of blocks of Array: ";
	cin >> blocks;

	int tensor[rows][cols][blocks];

//Accepts elements in Array
	for(i = 0; i < rows; i++) {
		for(j = 0; j < cols ; j++) {
			for(k = 0; k < blocks; k++) {
			cout << "Enter Elements at: [ " << i << "] [" << j << "]";
			cin >> tensor[i][j][k];
			}
		}
	}

// Display the 2D array
    cout << "The array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
        	for(k = 0; k < blocks; k++) {
            cout << tensor[i][j][k] << " ";
        	}
        }
        cout << endl;
    }
    return 0;
}