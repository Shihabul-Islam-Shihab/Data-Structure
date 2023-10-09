#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vct;
    int x,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        vct.push_back(x);
    }

 vct.push_back(99);
    vct.push_back(999); //add elements

    vct.pop_back();  //delete vector elements

    vct.at(0)=0; //update vector elements

    vct.insert(vct.begin()+3,0);
    vct.erase(vct.begin()+4);

    n=vct.size();
    cout<<"Updated vector"<<endl; //access elements

     for(int i=0;i<n;i++)
        cout<<vct[i]<<" ";

}

