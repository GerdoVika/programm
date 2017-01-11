#include <iostream>
#include <cmath>
using namespace std;
int f1 (int n, int i, int m){
    int k;
    for (int l=0; l<=9; l++){
        k=k+l*pow(10,i)+l*pow(10,n-i-1);
        i++;
        while (i<m)
        return f1(n,i,m);
        return k;
    }
}
int print_palindrome (int n){
    int i,k;
    if (n%2==0){
        for (int j=1; j<=9; j++){
            k=j*pow(10,n+j);
            k=k+f1(n,i,n/2-1);
            if (k%9==0)
            cout<<k;
        }
    }
    else{
        for (int j=1; j<=9; j++){
            k=j*pow(10,n+j);
            k=k+f1(n,i,n/2-2);
            for (int g=0; g<=9; g++){
                k=k+g*pow(10,n/2+1);
                if (k%9==0);
                cout<<k;
            }
        }
    }
    return 0;
}
int main(){
    int i,n,k;
    k=0;
    i=1;
    cin>>n;
    return print_palindrome (n);
    return 0;
}
          
            
            
  
