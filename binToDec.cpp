#include <iostream>
using namespace std;
void bin(int);
void cntDig(int);
static int cnt;

void cntDig(int dig){
    while(dig > 0){
        cnt++;
        dig /= 10;
    }
    cnt--;
}
void bin(int a){
    cntDig(a);
    int bin=0;
    while(cnt>0){
        
    printf("%d + ((%d mod %d) * (%d * %d)= ((%d) * (%d)) = %d",bin, a, 10, 2, cnt,(a % 10),(2 ^ cnt), bin + ((a % 10) * (2 ^ cnt)));
    bin = bin + ((a % 10) * (2 * cnt));
    cnt--;
    
     cout<<endl;
        a /= 10;
        
    }
    cout<<bin;
    
}

int main(){
    int binNo;
    // cin>> binNo;
    bin(11);

}