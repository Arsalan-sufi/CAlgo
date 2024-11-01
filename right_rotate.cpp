#include<iostream>
using namespace std;
#include<vector>

int main (){
  int arr[]={1,2,3,4,5,6,7,};
  int n=sizeof(arr)/sizeof(arr[0]);
int i=n;
int j=n;
int x=0;
    vector <int> vect;
    int k;
    cin>>k;

  for ( i = n; i > 0; i--)
  {
    if (i>n-k)
    {
      vect.push_back(arr[j-k]);
      j++;
    }
    else{
        vect.push_back(arr[x]);
        x++;
    }
    
  }

for(auto it:vect){
    cout<<it<<" ";
  
}

  return 0;
  }
  