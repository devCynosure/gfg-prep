#include <iostream>
using namespace std;

int main(){
  /* My logic  
    int n,sum=0;
    cout<<"Enter a Number: ";
    cin>>n;
    while(n){
        
        sum+=n;
        n--;
    }
    cout<<sum;
    */

   // gfg logic 

   int n,sum;
   cout<<"Enter the no: ";
   cin>>n;
   sum= n * (n+1) / 2;
   cout<<sum;
}