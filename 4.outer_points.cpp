#include <iostream>
using namespace std;
int outer_points (int n, int m){
    int a_1[n], a_2[n], sum, a;
    for (int i=0; i<n; i++)
    cin>>a_1[i]>>a_2[i];
    for (int j=0; j<m; j++){
        sum=0;
        cin>>a;
        for (int i=0; i<n; i++){
            if (a>=a_1[i] && a<=a_2[i])
            sum=sum+1;
        }
        cout<<n-sum<<" ";
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    return outer_points (n,m);
} 
