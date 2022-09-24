// Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int i, n, max, max_index;

	cout << "Enter numbers of array ending in zero: ";
	cin >> n;
	
	int* arr = new int[n];

	for (i = 0; i <= n - 1; i++) {
		cin >> arr[i];
	}

	max_index = 0;
	max = arr[0];
	for (i = 0; i <= n - 1; i++) {
		if (arr[i] > max) {
			max = arr[i];
			max_index = i;
		}
	}

	cout << "highest value is found at: " << max_index + 1 << endl;
}