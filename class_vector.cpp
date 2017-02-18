#include <iostream>
using namespace std;
class vector{
    int*arr;
    int size;
    public:
    vector(int new_size){
        int* arr=new int [new_size];
        size=new_size;
        for (int i=0;i<size;i++)
        arr[i]=NULL;      
    };
    ~vector(){
        delete arr;
    };
    bool push_back(int a){
        int i=0;
        while(arr[i]!=NULL)
        i++;
        if(i<size-1){
        arr[i+1]=a;
        return 1;
        }
        else return 0;        
    };
    void append(int new_size){
        size=new_size;
        int* temp=new int [new_size];
        for(int i=0; i<size; i++)
        temp[i]=arr[i];
        temp=arr;
        delete temp;
    };
    int get_size(){
        return size;
    };
    int & operator [](int i){
        return arr[i];
    }
    
};
int main(){
    vector A(4);
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);
    if(!A.push_back(5)){
        A.append(A.get_size()+1);
        A.push_back(5);
    }
    for (int i=0; i<A.get_size();i++)
    cout<<A[i];
    return 0;
}
    
