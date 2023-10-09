#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;
    int n, x;

    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        v1.push_back(x);
    }

    v1.push_back(99);
    v1.push_back(999);
    v1.pop_back();

    v1.erase(v1.begin()+3);
     v1.erase(v1.begin()+3,33);
    n = v1.size();

    cout << "Updated vector: ";
    for (int i = 0; i < n; i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}

