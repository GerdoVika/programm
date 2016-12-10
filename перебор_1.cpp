 #include <iostream>
 using namespace std;
 int main(){
    int a,n,s;
     s=1;
     cin>>n;
     for (int k=0; k<n; k++){
         int c,g;
         g=0;
         cin>>a;
         for (int i=2; i<a/2; i++){
             for (c=2; c<i/2; c++){
                 if(i%c!=0)
                 break;
             }
             if (c==i/2){
                 if(a%k==0)
                 g=g+1;
             }
         }
         if(g<=2)
         s=s*a;
     }
     cout<<s;
     return 0;
 }