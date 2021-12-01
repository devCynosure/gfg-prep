#include<iostream>
using namespace std;

int main(){
    int a=1,b=1,c=0;
    cout<<a<<" "<<b<<" ";
    for(int i = 1; i<= 10; i++){
        int c = a + b;
        cout<< c<<" ";
        a = b;
        b = c;
    }
}