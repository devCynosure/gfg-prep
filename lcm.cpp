#include <iostream>
using namespace std;

int gtr(int a, int b){
    if(a > b)
    return a;
    else return b;
}

void lcm(int a, int b){
   int  gt = gtr(a,b);
   int end = a *  b;
   for(int i = gt; i <= end; i++){
       if(i % a == 0 && i % b == 0){
           cout<<i;
           break;
       }
   }



}
int main(){
    int no1,no2;

    cin>>no1>>no2;

    lcm(no1,no2);
}