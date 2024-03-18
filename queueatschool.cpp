#include <bits/stdc++.h>
#include<iostream>
using namespace std ;

int main (){
    int n;
    cin>>n;
    int t;
    cin>>t;
    string s;
    cin>>s;
    while (t!=0){
    for (int i =0;i<n;){
        if (s[i]=='B' && s[i+1]=='G' ){
            swap(s[i],s[i+1]);
            i=i+2;
        }else{
            i=i+1;
        }
        
        
    }
    t--;
    }
    cout<<s;

    return 0;
}
