#include <bits/stdc++.h>
using namespace std ;

int main (){
   
   string s,m;
   cin>>s>>m;
   
   
  
   

   for (int i=0;i<s.length();i++){
    
    if (s[i]=='0'&& m[i]=='1'){
        cout<<"1";
    }else if (s[i]=='1'&& m[i]=='0'){
        cout<<"1";
    }else if (s[i]=='0'&& m[i]=='0'){
        cout<<"0";
    }else if (s[i]=='1'&& m[i]=='1'){
        cout<<"0";
    }
   }

   

    return 0;
}