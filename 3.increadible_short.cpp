#include <iostream>
using namespace std;
int increadible_short(int N, int k){
    int n;
    int*a=new int [k];
    for (int i=0; i<k; i++)
    a[i]=0;
    for (int i=0; i<N; i++){
        cin>>n;
        a[n-1]=a[n-1]+1;
    }
    for (int i=k-1; i>0; i--){
        if (a[i]!=0){
            for (int j=0; j<a[i]; j++)
            cout<<i+1<<" ";
        }
    }
}
int main(){
    int N,k;
    cin>>N>>k;
    return increadible_short(N,k);
}