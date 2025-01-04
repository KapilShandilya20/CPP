//Search in Array and determine how many times Number has repeated

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;


int main() {
    int i, key, size, count = 0;

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

    cout << "Enter the Element you want to Search: ";
    cin >> key;

    // Searching for the key and counting repetitions
    for(i = 0; i < size ; i++) {
        if(arr[i] == key) {
            count++;
        }
    }

    if(count == 0) {
        cout << "Element not Found" << endl;
    }
    else {
        cout << "The number " << key << " is repeated " << count << " times" << endl;
    }

    return 0;
}
