#include <bits/stdc++.h>
using namespace std ;

int main (){
    int n ;
    cin>>n;
    int arr[n][3];
    for (int i=0;i<n;i++){
        for (int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    int  temp[3];
    for (int j=0;j<3;j++){
        int sum=0;
        for (int i =0;i<n;i++){
            sum=sum+arr[i][j];
        }
        temp[j]=sum;
    }
    if (temp[0]==0 && temp[1]==0 && temp[2]==0){
        cout<<"YES";
    }else {
        cout<<"NO";
    }

    return 0;
}