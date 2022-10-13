
#include <iostream>
using namespace std;

int main() {
	string sequence;

	cout << "Enter sequence: ";
	cin >> sequence;

	int i = 0, pos_of_highest = int(sequence[0]);
	while (int(sequence[i]) != 0)
	{
		if (int(sequence[i]) > int(sequence[pos_of_highest])) {
			pos_of_highest = i;
		}
		i++;
	}

	cout << i;

	/*int arr[20] = {};
	int i = 0, len;

	do {
		cin >> arr[i];
		len = ++i;
	} while (arr[i - 1] != 0);

	int pos = 0;
	int maxz = arr[0];
	for (i = 1; i <= len - 1; i++) {
		maxz = max(maxz, arr[i]);
	}

	for (i = 0; i <= len - 1; i++) {
		if (maxz == arr[i]) {
			break;
		}
	}

	cout << i << endl;*/
}
