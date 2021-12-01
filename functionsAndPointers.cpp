#include <iostream>
using namespace std;

void fun(int *x){
    *x = *x + 5;
}

void str(string *s){
    cout<<*s;
}

int main(){
    int x = 10;
    string st = "My name is sharan, I am a good human being.\n";
    fun(&x);
    str(&st);
    cout<<x;
    return 0;
}