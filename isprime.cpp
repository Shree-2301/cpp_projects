// task :  check weather given number is prime or not.

#include <iostream>
using namespace std;


bool isPrime(int num) {

	bool isPrime = true;

	if( num == 0 || num == 1)
		isPrime = false;

	for(int i = 2; i <= num/2; i++) {

		if(num % i == 0) {

		    isPrime = false;
		    break;
		}

	}
	return isPrime;
}
int main() {

	int num;
	cout << "enter a number: ";
	cin >> num;
	if(isPrime(num)) 
	   cout << num << " is a prime number." << endl;
	else
	   cout << num << " is not a prime number." << endl;
	return 0;

}
