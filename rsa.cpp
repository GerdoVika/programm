#include <iostream>
using namespace std;
typedef class rsa{
    int p;
    int q;
    int N=p*q;
    int e;
    int d(){
        int d=(1%(p-1)*(q-1))/e;
        return d;
    };
    public:
    int get_p(){
        return p;
    };
    int get_q(){
        return q;
    };
    void set_p(int a){
        p=a;
    };
    void set_q(int a){
        q=a;
    };
    void set_e(){
        int o=(p-1)*(q-1);
        cout<<"введите число e, взаимнопростое с "<<o<<" и меньше "<<o<<" ";
        cin>>e;
    };
    int encrypt(int m){
        int c=(m^e)%N;
        return c;
    };
    int decrypt(int c){
        int m=(c^d())%N;
        return m;
    };
};
int main(){
    rsa A;
    A.set_p(5);
    A.set_q(3);
    A.set_e();
    int c=A.encrypt(1110110000110);
    int m=A.decrypt(c);
    cout<<m;
    return 0;
}
    