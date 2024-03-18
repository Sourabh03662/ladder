#include <bits/stdc++.h>
using namespace std ;

int main (){
    string s;
    cin>>s;
    for (int j=0;j<s.length();j=j+2){
    for (int i=j;i<s.length();i+2){
        if (s[i]<s[j]){
            swap(s[i],s[j]);
        }
    }
    }
    cout<<s;
    return 0;
}