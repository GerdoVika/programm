#include <iostream>
using namespace std;
int darts_game(int n){
    int k;
    if (n<=150){
        for (int i=1; i<=25; i++){
            if (i<=20 || i==25){
                k=n-2*i;
                if (k>=0){
                    cout<<"D"<<i<<" ";
                    if (k==0){
                        cout<<"\n";
                        exit(0);
                    }
                    for (int j=1; j<=25; j++){
                        if(j<=20 || j==25){
                            for (int m=1; m<3; m++){
                                k=k-m*j;
                                if (k>=0){
                                    if (m==1) cout<<j<<" ";
                                    if (m==2) cout<<"D"<<j<<" ";
                                    if (k==0){
                                        cout<<"\n";
                                        exit(0);
                                    }
                    for (int x=1; x<=25; x++){
                        if(x<=20 || x==25){
                            for (int o=1; o<3; o++){
                                k=k-o*x;
                                if (k==0){
                                    if (o==1) cout<<x<<" ";
                                    if (o==2) cout<<"D"<<x<<" ";
                                    cout<<"\n";
                            }}}}}
                            else exit(0);}}}}
                            else exit(0);}}}}
int main(){
    int n;
    cin>>n;
    return darts_game(n);
}