#include <iostream>
#include <queue>
using namespace std;
int* bucet_sort(int min, int max, int*a, int size){
    int*arr = new int [size];
    arr=a;
    int k=(max-min)/10;
    priority_queue<int>* arr1 = new priority_queue<int> [k];
    for (int i=0; i<size; i++){
        int c=((arr[i]-min)/10)+1;
        arr1[c].push(arr[i]);
    }
    int m;
    for (int i=0; i<k; i++){
        int e=m+arr1[i].size();
        for (int n=m; n<e; n++){
            arr[n]=arr1[i].top();
            arr1[i].pop();
        }
        m=e;
    }
    return arr;
}
int main(){
    int arr[15];
    for (int i=0; i<15; i++)
    cin>>arr[i];
    int* newarr=bucet_sort(1,15,arr,15);
    for (int i=0; i<15; i++)
    cout<<newarr[i]<<" ";
    return 0;
}