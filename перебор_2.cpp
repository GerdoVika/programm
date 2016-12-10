#include <iostream>
using namespace std;
int main(){
int c,m,n,r,w;
    for (int i=0; i<28; i++){
    if (i%2==0){
    for (int a=0; a<=9; a++){
    for (int b=0; b<=9; b++){
    c=i-a-b;
        for (int q=0; q<28; q++){
        if (q%3==0){
        for (int o=0; o<=9; o++){
        for (int p=0; p<=9; p++){
        r=q-o-p;
            for (int d=o; d<=9; d++){
            for (int x=0; x<=9; x++){
            m=21-b-d-x-o-r;
                for (int z=0; z<=33; z+=11){
                n=z-c-x-r;
                    for (int e=o; e<=9; e++){
                    for (int l=0; l<=9; l++){
                        cout<<a<<b<<c<<d<<e<<x<<l<<m<<n<<o<<p<<r;
                    }}}}}}}}}}}}}
                    return 0;
}