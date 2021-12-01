#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter 3 no's ";
    cin>>a>>b>>c;
    if(a > b && a > c)
        cout<<a<<" is largest no";
    else if(b > c ){
        cout<<b<<" is the largest no";
    }else{
        cout<<c<<" is the largest no";
    }
    return 0;
}