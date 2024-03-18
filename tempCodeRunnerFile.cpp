#include <bits/stdc++.h>
using namespace std ;

int main (){
    int year;
    cin>>year;
    
    int temp=year+1;
    while (temp!=9012){
    int temp1=temp;
    int arr[4];
    for (int j =3;j>=0;j--){
        int a=(temp1)%10;
        arr[j]=a;
        temp1=temp1/10;
    }
    if (arr[0]!=arr[1] && arr[0]!=arr[2] && arr[0]!=arr[3]  && arr[1]!=arr[2]  && arr[1]!=arr[3] && arr[2]!=arr[3]  ){
        for (int i=0;i<4;i++){
            cout<<arr[i];
        }
        break;
    }
    temp++;
    }

    
    return 0;
}