
#include <iostream>
using namespace std;
int main(){
    int n;
    int*delete_annoying_primes (n, int*array_1){
        for (int i=0; i<n; i++){
            for (int a=o; a<n; a++){
                if (array_1[i]==array_1[a] || a!=i){
                    for (int m=2; m<array_1[i]/2; m++){
                       if (array_1%m==0){
                           for (int k=i; k<n-1; k++){
                               array_1[k]=array_1[k+1];
                                   n=n-1;
                           }
                       }
                    }
                }
            }
        }
        int*array_2[n];
        for(int i=0; i<n; i++)
        array_2[i]=array_1[i];
        delete array_1;
        return array_2;
    }
    cin>>n;
    for (int i=0; i<n; i++)
    cin>>array_1[i];
    array=delete_duplicates (n, array_1);
    for (int i=0; i<n; i++)
    cout<<array[i]<<' ';
    return 0;
}
