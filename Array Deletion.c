
//delete an element in arrays
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];}

int pos,i;
cout<<"Enter your position to delete : ";
cin>>pos;
if(pos>=0&&pos<=n-1){
for(i=n-1;i>=pos;i--)
a[i]=a[i+1];

cout<<"New array="<<endl;
for(i=0;i<n-1;i++)
    cout<<a[i]<<" ";
}
else{
    cout<<"invalid position to delete"<<endl;


}


}


