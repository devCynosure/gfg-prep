#include <iostream>
#include <iomanip>
using namespace std;

int firstDigit(int n){
    while(n > 9){
        n/=10;
    }
    return n;
}

int main(){
    int n;
    cin>>n;
    cout<<std::showpos;
    cout<<firstDigit(n);
    
}