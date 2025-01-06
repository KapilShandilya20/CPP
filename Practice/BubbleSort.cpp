//BubbleSort

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main(){
	int i,j,flag,size;

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
	for(i = 0;i < size; i++) {
		cout << n[i] << " ";
	}
	cout << endl;

	//Bubble Sort
	flag = 1;
	for(i=0; i < size-1 && flag == 1; i++) {
		flag = 0;
		for(j=0;j < size-1-i; j++){
			if(n[j] > n[j+1]){
				swap(n[j],n[j+1]);
				flag = 1;
			}
		}
	}

	//Displaying Sorted Array
	cout << "Sorted array: ";
	for(i = 0;i < size; i++) {
		cout << n[i] << " ";
	}

	return 0;
}