// WAP to find number of prime number in given range. ?
#include <iostream>
using namespace std;
int main()
{
	int Number,flag = 0;
	cout << "enter a number which you want to check weather prime or not ?" << endl;
	cin >> Number;
	cout << "prime numbers in given range:";
	for(int i = 1; i <= Number; i++) {
		flag = 0;
		for(int j = 2; j <= i/2; j++) {
			if(i % j == 0) {
			   flag = 1;
			}
	 	}
		if(!flag &&i != 1) {
		  cout << i << " ";
		}
	
	}
	return 0;
}
