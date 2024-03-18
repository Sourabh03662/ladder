#include <bits/stdc++.h>
using namespace std ;

int main (){
    string s;
    cin>>s;
    char arr[s.length()];
    for (int i=0;i<s.length();i++){
        arr[i]=s[i];
    }
    int count=0;
    for (int i=0;i<s.length();i++){
        for (int j=i+1;j<s.length();j++){
        if (arr[j]==arr[i]){
            count++;
        }
    }
    }
    int n=s.length()-count;
    if (n%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}