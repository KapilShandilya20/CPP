// Reverse Array without TempArr

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
    int i, temp, size;

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

    // Reverse the array
    for(i = 0; i < size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }

    cout << "The reversed Array is: ";
    for(i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}