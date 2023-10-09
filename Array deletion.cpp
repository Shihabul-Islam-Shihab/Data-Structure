//delete an element in arrays
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}
//...................................................

    int Pos;
    //cout << "Enter the position to delete: ";
    //cin >> Pos;
    //Pos = n / 2; // Delete at the middle
    Pos = 0; // Delete at the beginning
    // Pos = n - 1; // Delete at the end

    if (Pos >= 0 && Pos < n) {
        for (int i = Pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        cout << "Updated Array:" << endl;
        for (int i = 0; i < n - 1; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Invalid position to delete" << endl;
    }
}


