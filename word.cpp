#include <bits/stdc++.h>
using namespace std ;

int main (){
    string s;
    cin>>s;
    int count1=0;
    int count2=0;
    int count=0;
    int i =0;
    while (s[i]!=0){
        if (s[i]!=0){
            count++;
        }
        i++;
    }
    for (int i=0;i<count;i++){
        if (s[i]=='a' || s[i]=='b' || s[i]=='c' || s[i]=='d' || s[i]=='e' || s[i]=='f' || s[i]=='g' || s[i]=='h' || s[i]=='i' || s[i]=='j' || s[i]=='k' || s[i]=='l' || s[i]=='m' || s[i]=='n' || s[i]=='o' || s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s' || s[i]=='t' || s[i]=='u' || s[i]=='v' || s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z'   ){
            count1++;
    }else{
        count2++;
    }
    }
    for (int i =0;i<count;i++){
        if (count1>count2){
        if (s[i]=='a' || s[i]=='b' || s[i]=='c' || s[i]=='d' || s[i]=='e' || s[i]=='f' || s[i]=='g' || s[i]=='h' || s[i]=='i' || s[i]=='j' || s[i]=='k' || s[i]=='l' || s[i]=='m' || s[i]=='n' || s[i]=='o' || s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s' || s[i]=='t' || s[i]=='u' || s[i]=='v' || s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z'   ){
            s[i]=s[i];
        }else {
            s[i]=s[i]+32;
        }
    }else if (count1<count2){
        if (s[i]=='a' || s[i]=='b' || s[i]=='c' || s[i]=='d' || s[i]=='e' || s[i]=='f' || s[i]=='g' || s[i]=='h' || s[i]=='i' || s[i]=='j' || s[i]=='k' || s[i]=='l' || s[i]=='m' || s[i]=='n' || s[i]=='o' || s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s' || s[i]=='t' || s[i]=='u' || s[i]=='v' || s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z'   ){
            s[i]=s[i]-32;
        }else {
            s[i]=s[i];
        }
    }else if (count1==count2){
        if (s[i]=='a' || s[i]=='b' || s[i]=='c' || s[i]=='d' || s[i]=='e' || s[i]=='f' || s[i]=='g' || s[i]=='h' || s[i]=='i' || s[i]=='j' || s[i]=='k' || s[i]=='l' || s[i]=='m' || s[i]=='n' || s[i]=='o' || s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s' || s[i]=='t' || s[i]=='u' || s[i]=='v' || s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z'   ){
            s[i]=s[i];
        }else {
            s[i]=s[i]+32;
        }
    }
}
    cout<<s;
return 0;
}