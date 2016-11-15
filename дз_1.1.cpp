#include <iostream>
using namespace std;
int main(){
    int n;
    int*delete_duplicates (n, int*array_1){
        for (int i=0; i<n; i++){
            for (int k=0; k<n; k++){
                if (array_1[i]=array_1[k] || i!=k){
                    for (int i=k; i<n; i++)
                    array_1[i]=array_1[i-1];
                    n=n-1;
                }
            }
        }
        int*array_2[n];
        for(int i=0; i<n; i++)
        array_2[i]=array_1[i];
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
