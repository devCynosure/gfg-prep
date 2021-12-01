#include<iostream>
using namespace std;

int factorial(int fact){
    static int f = 1;
    int i = 1;
    while(i<fact){
         f = fact * i;
         i++;
    }
    return f;
}
int main(){
    int fact;
    cin>>fact;
    cout<<factorial(fact);   
}