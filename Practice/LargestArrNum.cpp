//Largest Array Element

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
	int i,size;

	cout << "Enter the size of Array: ";
	cin >> size;

	int n[size];
	for(i=0;i < size; i++) {
	cout << "Enter the Element: ";
	cin >> n[i];
	}

	cout << "Elements in the Array are: ";
	for(i = 0;i < size ;i++) {
	cout << n[i] << " ";
	}
	cout << endl;

	int big = n[0];
	for(i = 1;i < size ;i++) {
		if(n[i] > big)  {
			big = n[i];
		}
	}
		cout << "Largest Element is: " << big ;
	return 0;
}