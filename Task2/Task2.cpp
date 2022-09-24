// Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int count = 0, n, max, max_index;
	
	int* arr = nullptr;

	cout << "type a value and hit Enter; type 0 to stop" << endl;
	do {
		count++;
		cin >> n;

		// We will grow the array dynamically since we don't know the size yet
		if(arr == nullptr){
			arr = new int[count];
			arr[0]=n;
		}
		else{
			// create a temporary array
			int* temp = new int[count];
			//copy the value from the main array to the temporary array
			for (int i = 0; i < count - 1; i++) {
				temp[i]=arr[i];
			}
			temp[count-1]=n;

			// clear the memory of the main array
			delete[] arr;
			// fill the main array
			arr=temp;
		}
	} while(n != 0);

	max_index = 0;
	max = arr[0];
	for (int i = 0; i <= count - 1; i++) {
		if (arr[i] > max) {
			max = arr[i];
			max_index = i;
		}
	}

	cout << "highest value is found at: " << max_index << endl;

	delete[] arr;
}