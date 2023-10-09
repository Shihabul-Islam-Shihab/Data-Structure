//array insertion
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array=";
    cin >> n;
    cout<<"Enter the size element of array=";
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}
//....................................................
   int Element, pos, i;
    cout << "Enter the element to insert= ";
    cin >> Element;
//cout<<"Enter the position to insert=";
//cin>>pos;          //random position

//pos = n / 2; // Delete at the middle

    pos = 0; // Delete at the beginning

    // pos = n - 1; // Delete at the end


    for (i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = Element;

    cout << "New Array ";
    for (i = 0; i < n + 1; i++) {
        cout << arr[i] << " ";}
    cout << endl;
    return 0;
}
