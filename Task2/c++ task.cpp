
#include <iostream>
using namespace std;

int main() {
    int arr[20] = {};
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

    cout << i << endl;
}
