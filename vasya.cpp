#include <bits/stdc++.h>
using namespace std ;

int main (){
    int n;
    int arr[n];
    int count=0;
    int max=arr[0];
    int min=arr[0];
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    for (int i=1;i<n;i++){
        for (int j=0;j<i;j++){
            if (arr[j]>max){
                max=arr[j];
                
            }else if (arr[j]<min){
                min=arr[j];
            }
        }
        if (arr[i]>max || arr[i]<min){
            count++;
        }
    }
    cout<<count;
    return 0;
}