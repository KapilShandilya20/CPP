// Sum of all natural numbers until "n"


#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main(){
	int n,i;

	cout << "Enter value of n: ";
	cin >> n;
	int sum = 0;
	for(i==1 ;i<= n; i++) {
		sum = sum + i;
	}
		cout << "The sum of all natural numbers until n is: " << sum; 
	return 0;
}