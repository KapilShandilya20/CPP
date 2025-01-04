//Search the Element in an Array

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
    int i,key ,size;

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

    for(i=0; i < size ;i++){
    	if(arr[i] == key){
    		break;
    	}
    }
    if(i == size){
    	cout << "Element not Found" << endl;
    }
    else{
    	cout << "Element " << key << " Found at index: "<< i; 
    }
    return 0;
}