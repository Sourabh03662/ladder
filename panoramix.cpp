
#include<iostream>
using namespace std ;
bool isprime(int n ){

    if (n==0 || n==1){
        return false;
    }
    int a=0;
    for (int i =2;i<n;i++){
        if (n%i==0){
            a=1;
            break;
        }
}  
    if(a==0){
        return true;
    }else {
        return false;
    }
 }

int main (){
    int n,m;
    cin>>n>>m;
    int a=0;
    for(int i=n+1;i<=m;i++){
        if(isprime(i) ){        
            if(i==m){
                a=i;
            }
            break;
        }

        }
    
    if(a==m){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    } 
    return 0;
}