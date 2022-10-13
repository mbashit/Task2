
#include <iostream>
#include <string>

using namespace std;

int main() {
    string sequence;

    cout << "Enter sequence: ";
    cin >> sequence;

    int i = 1, pos_of_highest = 0;
    while (int(sequence[i]) != 0)
    {
        if (int(sequence[i]) > int(sequence[pos_of_highest])) {
            pos_of_highest = i;
        }
        i++;
    }

    cout << pos_of_highest;
}
