// Reverse an Array

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
    int i, j, size;

    cout << "Enter the size of Array: ";
    cin >> size;

    int arr[size];
    for(i = 0; i < size; i++) {
        cout << "Enter the Element: ";
        cin >> arr[i];
    }

    cout << "Elements in the Array are: ";
    for(i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int TempArr[size];
    for(i = size - 1, j = 0; i >= 0; i--, j++) {
        TempArr[j] = arr[i];
    }
    for(i = 0; i < size; i++) {
        arr[i] = TempArr[i];
    }

    cout << "The reversed Array is: ";
    for(i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
