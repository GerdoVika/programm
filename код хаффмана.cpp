#include <iostream>
#include <string>
using namespace std;
typedef struct arr{
    int size;
    char* arr1;
    int* arr2;
    arr(int a){
        size=a;
        char* arr1=new char[size];
        int* arr2=new int[size];
    };
    void set (char a,int b){
        int i=0;
        while(b<=arr2[i])
        i++;
        arr1[i]=a;
        arr2[i]=b;
    };
}
string* fgk(arr* A){
    std::string<char>;
    string* code= new string[A.size];
    int c=A.arr2[0]+arr2[1];
    code[0]+="0";
    code[1]+="1";
    for (int i=2; i<A.size;){
        if (c<A.arr2[i]){
            c=c+A.arr2[i];
            code[i]+="1";
            for(int k=0;k<i;k++)
            code[k]+="0";
            i++;
        }
        else{
            if (i!=A.size){
            c=c+A.arr2[i]+A.arr2[i+1];
            code[i]="01";
            code[i+1]="11";
            }
            else{
                code[1]="1";
            }
            for(int k=0;k<i;k++)
            code[k]+="0";
            i=i+2;
        }
    }
    int m,l;
    for(int i=0; i<A.size; i++){
        m=code[i].lengh();
        for(in t=0;t<m/2;t++){
            l=code[i][t];
            code[i][t]=code[i][m-t];
            code[i][m-t]=l;
        }
    }
    return *code;
}
int main(){
    arr A(5);
    A.set("m",5);
    A.set("f",10);
    A.set("j",7);
    A.set("r",3);
    A.set("t",11);
    array=fgk(*A);
    for(int i=0;i<5;i++){
        cout<<A.arr1[i]<<" ";
        for (int c=0;c<array[i].lengh;c++)
        cout<<array[i][c];
        cout<<";";
    }
    return 0;
}