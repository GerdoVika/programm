#include <iostream>
using namespace std;
int main(){
    int a,b,n;
    cin>>a>>b;
    if (b%2==0){
        while (b>1){
            a=a*a;
            b=b/2;
        }
    }
    else{
        b=b-1;
        n=a;
        while (b>1){
            a=a*a;
            b=b/2;
        }
        a=a*n;
    }
    cout<<a;
    return 0;
}

