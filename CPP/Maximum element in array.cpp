#include<bits/stdc++.h>
using namespace std;

int main(){
  int size; 
  cin>>size; 
  int arr[size];
  for(int i=0;i<size;i++){
     cin>>arr[i];
  }
  int mx=INT_MIN;
  for(int i=0;i<size;i++){
     mx=max(mx,arr[i]);
     
  }
  cout<<"Maximum element is "<<mx<<endl;
  return 0;
}
  
