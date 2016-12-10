#include <iostream>
using namespace std;
double f(double*a,int i, int c){
    double x=a[i];
    int n;
    double k,m;
    while(a[i+1]!=a[c]){
        if ((a[i+1]<x) && (a[c]>x)){
            i++;
            c--;
        }
        else if ((a[i+1]>x) && (a[c]>x)){
            c--;
        }
        if ((a[i+1]<x) && (a[c]<x)){
            i++;
        }
        if ((a[i+1]>x) && (a[c]<x)){
            a[i+1]=k;
            a[i+1]=a[c];
            a[c]=k;
        }
    }
    a[c]=m;
    a[c]=a[i];
    a[i]=m;
    if(a[c]>m)
    return f(a,0,c-1);
    else if(a[c]<m)
    return f(a,c+1,n);
    return*a;
}
int main(){
    int n,c,i;
    double a[n],a_1[n];
    double q;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>q;
        a[i]=q;
    }
    c=n;
    a_1=f(a,i,c)
    for (int i=0; i<n; i++)
    cout<<a_1[i]<<" ";
    return 0;
}