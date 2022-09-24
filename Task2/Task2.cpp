// Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int i = 0, n, max, max_index;
	
	int* arr = new int[n];

	cout << "type a value and hit Enter; type 0 to stop";
	do {
		cin >> n;
		arr[i] = n;
		i++;
	} while(n != 0);

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