#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n], minindex, maxindex, maxi = INT16_MIN, mini = INT16_MAX;
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }
  for  (int i =0;i<n;i++){
    if(arr[i]> maxi){
      maxindex = i;
      maxi = arr[i];
    }
    if(arr[i] <= mini){
      minindex = i;
      mini = arr[i];
    }
  }
  

  if(maxindex>minindex){
	cout<<(maxindex-1)+(n-minindex)-1;
  }
  else{
	cout<<(maxindex-1)+(n-minindex);

}
}

