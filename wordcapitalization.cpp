#include <bits/stdc++.h>
using namespace std ;

int main (){
    string s;
    cin>>s;
     
    if (s[0]=='a' || s[0]=='b' || s[0]=='c' || s[0]=='d' || s[0]=='e' || s[0]=='f' || s[0]=='g' || s[0]=='h' || s[0]=='i' || s[0]=='j' || s[0]=='k' || s[0]=='l' || s[0]=='m' || s[0]=='n' || s[0]=='o' || s[0]=='p' || s[0]=='q' || s[0]=='r' || s[0]=='s' || s[0]=='t' || s[0]=='u' || s[0]=='v' || s[0]=='w' || s[0]=='x' || s[0]=='y' || s[0]=='z'   ){
            s[0]=s[0]-32;
        }else {
            s[0]=s[0];
     }
     cout<<s;
    return 0;
}