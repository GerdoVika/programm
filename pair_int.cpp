#include <iostream>
#include <string>
using namespace std;
class pair_int{
    int first;
    int second;
    public:
    pair_int(int a, int b){
        first=a;
        second=b;
    }
    int get_first(){
     return first;
     }
    int get_second(){
     return second;
    }
    int set_first(){
     cin>>first;
    }
    int set_second(){
     cin>>second;
    }
}
void swap (pair_int &a, pair_int &b){
    int c=a.get_first;
    a.get_first()=b.set_first();
    b.get_first()=c;
}
bool operator == (pair_int a, pair_int b){
    if (a.get_first()==b.get_first() || a.get_second()==b.get_second()) return 1;
    return 0;
}
bool operator != (pair_int a, pair_int b){
    if(a.get_first()==b.get_first() || a.get_second()==b.get_second()) return 0;
    return 1;
}
int main(){
    class pair_int A;
    A.set_first();
    A.set_second();
    class pair_int B(A);
    return 0;
}