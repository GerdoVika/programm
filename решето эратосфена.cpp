#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a=new int [n];
    for (int i=0; i<n; i++)
    a[i]=i+1;
    a[0]=0;
    for (int k=2; k<n; k++){
        for(int i=k+2; i<n; i++){
            if (a[i]%k==0)
            a[i]=0;
        }
    }
    for (int i=0; i<n; i++){
        if (a[i]!=0)
        cout<<a[i]<<' ';
    }
    return 0;
}

