
//deletion array
#include <iostream>
using namespace std;

int main() {

 int n;
 cin>>n;
 int arr[n];
 for (int i=0;i<n;i++){
    cin>>arr[i]; }

    /*for (int i = 0; i < n - 1; i++) {    //begain delete
        arr[i] = arr[i + 1];
    }n--;*/

 n--; // end deletion

 // Shift elements to the left starting from the middle position

int pos=n/2;//middlet delete
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }n--;    //middle delete

    for (int i = 0; i < n; i++) {
       cout << arr[i] << " ";
    }

    return 0;
}

