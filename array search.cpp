#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int arr[n];
 for (int i=0;i<n;i++){
    cin>>arr[i]; }


    int a,x;
    cout<<"ENter the number that want to search=";
cin>>x;
    for(int i=0;i<n;i++){

        if (arr[i]==x)
        a=i+1;
    }
cout<<a<<"th";
}





