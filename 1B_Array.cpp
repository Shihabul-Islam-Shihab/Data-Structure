#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 /*for(int i=n;i>=0;i--){  //1st position
    arr[i+1]=arr[i];
 }
 cout<<"Enter the element for beginning"<<endl;
 cin>>arr[0];*/ //1st position

//arr[n]=arr[n+1]; //end position
//cout<<"ENter element at last position"<<endl;
//cin>>arr[n]; //end position

    int newElement;
    cout << "Enter the element to insert in the middle: ";
    cin >> newElement;
    int middle = n / 2;
    for (int i = n; i > middle; i--) {
        arr[i] = arr[i - 1];}
    arr[middle] = newElement;
    n++;

for(int i=0;i<n+1;i++)
cout<<arr[i]<<" ";}
