#include <iostream>
using namespace std;
int main(){
    int a,b,nok,n;
    cin>>a>>b;
    n=a*b;
    if(a==b){
        cout<<a;
    }
    else{
        while(a!=0 && b!=0){
            if(a>b){
                a=a%b;
            }
            else{
                b=b%a;
            }
        }
    nok=n/(a+b);
    cout<<nok;
    }
    return 0;
}
