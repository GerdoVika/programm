#include <iostream>
using namespace std;
int main(){
   int a,k,m,n;
   cin>>a;
   k=1;
   n=1;
   m=a;
   for (int i=2; i<a || a!=1; i++){
       if (a%i==0){
           k=(i-1)*k;
           n=i*n;
       }
       while (a%i==0)
       a=a/i;
   }
    k=(k*m)/n;
    cout<<k;
    return 0;
}


