#include <iostream>
using namespace std;
typedef class string{
    int size;
    char*array;
    public:
    string(int x){
        size=x;
        array=new int[size];
    }
    ~string(){
        for (int i=0; i<size; i++)
        delete array[i];
        delete array;
    }
    void read_string(){
        cin>>size;
        for (int i=0; i<size; i++)
        cin>>array[i];
    }
    void print_string(){
        for (int i=0; i<size; i++)
        cout<<array[i];
    }
    char get_simbol(int i){
        return array[i];
    }
    char get_size(){
        return size;
    }
    char set_simbol(int i){
        cout<<array[i];
    }
    int find (string A){
        int k=0;
        bool c=0;
        for (int j=0; j<size; j++){
            for (int i=0; i<A.get_size(); i++){
                if (array[i]==A.array[j+i])
                k++;
            }
            if (k==A.get_size()+1){
                c=1;
                return j;
                break;
            }
        }
        if(!c)
        return c;
    }
};        
void concat (string A, string B){
    class string AB;
    AB.size=A.get_size()+B.get_size();
    for (int i=0; i<A.get_size(); i++)
    AB.array[i]=A.array[i];
    for (int i=0; i<B.get_size(); i++)
    AB.array[i+A.get_size()]=B.array[i];
}
void change (string &A, string K){
    if(A.find(K)!=0){
        for (int i=j; i<j+K.get_size; i++){
            if(i%2) A.get_simbol(i)="x";
            A.get_simbol(i)="е"
        }
    }
}
int main(){
    class string A;
    a.read_string();
    class string B = {5,"шукша"};
    change (A,B);
    class string C = {6,"шушера"};
    change (A,C);
    class string D = {9, "стекломой"};
    change (A,D);
    class string E = {2, "=D"};
    concat (A,E);
    AB.print_string();
    return 0;
}
        
        
        
                
        
        