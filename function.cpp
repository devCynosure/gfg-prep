#include <iostream>
#include <iomanip>
using namespace std;
int display();
int input();
void square(int);

int main(){
display();
}

int display(){
    cout<<" Enter the number ";
    square(input());
    return 0;
}

int input(){
    int a = 0;
    cin>>a;
    return a;
}

void square(int a){
    cout<<a*a;
}