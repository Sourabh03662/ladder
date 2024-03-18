#include <bits/stdc++.h>
using namespace std ;

int main (){
    int n;
    cin>>n;
    int arr[n][2];
    for (int i =0;i<n;i++){
        for (int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    int max=INT16_MIN;
    for (int i =0;i<n;i++){
        for (int j=0;j<2;j++){
            if (j==0){
                sum=sum-arr[i][j];
            }else if (j==1){
                sum=sum+arr[i][j];
            }
        }
        
        if (sum>max){
            max=sum;
        }
    }
    cout<<max;
    return 0;
}