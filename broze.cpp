#include <bits/stdc++.h>
using namespace std ;

int main (){
    string s;
    cin>>s;
    int sum=0;
    int i=0;
    int count=0;
    
    while (s[i]!=0){
        if (s[i]!=0){
            count++;
        }
        i++;
    }

    for (int i =0;i<count;){
        if (s[i]=='.' ){
            cout<<"0";
            i=i+1;
        }else if (s[i]=='-' && s[i+1]=='.'){
            cout<<"1";
            i=i+2;
        }else if (s[i]=='-' && s[i+1]=='-'){
            cout<<"2";
            i=i+2;
        }
    }
    

    return 0;
}