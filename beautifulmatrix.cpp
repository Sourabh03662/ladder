#include <bits/stdc++.h>
using namespace std ;

int main (){
    int arr[5][5];
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    int k ;
    int l ;
    for (int j=0;j<5;j++){
        for (int i =0;i<5;i++){
            if (arr[i][j]!=0){
                 k=i;
                 l=j;
            }
        }
    }
    if (k==0 && l==0 || k==0 && l==4 || k==4 && l==4 ||k==4 && l==0){ 
        cout<<"4";
    }else if (k==0 && l==1 || k==0 && l==3 || k==1 && l==4 ||k==3 && l==4 ||k==4 && l==3 || k==4 && l==1 ||k==3 && l==0 || k==1 && l==0){
        cout<<"3";
    }else if (k==1 && l==1|| k==1 && l==3 ||k==3 && l==3 ||k==3 && l==1||k==2 && l==0||k==2 && l==4 ||k==4 && l==2 ||k==0 && l==2){
        cout<<"2";
    }else if (k==2 && l==2){
        cout<<"0";
    }else {
        cout<<"1";
    }
    return 0;
}