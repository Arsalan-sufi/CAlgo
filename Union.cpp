#include<bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cin>>n;
    int arr1[n];
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++) {
        cin>>arr2[i];
    }
    map<int,int> mpp;
    for(int i=0;i<n;i++) {
        mpp[arr1[i]]++;
    }
    for(int i=0;i<m;i++) {
        mpp[arr2[i]]++;
    }
    cout<<"The unique elements are: "<<endl;
    for(auto it:mpp){
        cout<<it.first<<" "<<endl;
    }

    return 0;
}