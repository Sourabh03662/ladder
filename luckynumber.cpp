#include <bits/stdc++.h>
using namespace std ;

 int main (){
    long long int n ;
    cin>>n;
    long long int temp=n;

    long long int count=0;

    while(n!=0){
        count++;
        n=n/10;
    }

    long long int arr[count];
    for (long long int i =count-1;i>=0;i--){
        long long int a =temp%10;
        arr[i]=a;
        temp=temp/10;
    }
    long long int count1=0;

    for (long long int i =0;i<count;i++){
        if (arr[i]==4 || arr[i]==7){
            count1++;
        }
    }
    
    if (count1==4  || count1==7){
        cout<<"YES";
    }else {
        cout<<"NO";
    }

    return 0;
}