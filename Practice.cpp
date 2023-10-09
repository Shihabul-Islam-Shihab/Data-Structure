#include <iostream>
using namespace std;

template <typename T, size_t N>
void insertElement(T (&arr)[N], T Element, size_t pos) {
    for (size_t i = N - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = Element;
}

int main() {
    int n;
    cout << "Enter the size of array = ";
    cin >> n;

    int arr[n];

    cout << "Enter the size element of array = ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int Element, pos;
    cout << "Enter the element to insert = ";
    cin >> Element;

    cout << "Enter the position to insert = ";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position. Insertion failed." << endl;
        return 1; // Exit with an error code
    }

    insertElement(arr, Element, pos);

    cout << "New Array: ";
    for (int i = 0; i < n + 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}




