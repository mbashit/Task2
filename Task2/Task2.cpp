#include <iostream>

using namespace std;

int main() {
	int num, max = -1000, count = 0, pos;

	do
	{
		cin >> num;

		if (num >= max) {
			max = num;
			pos = count + 1;
		}

		count++;
	} while (num != 0);

	cout << pos;
}
