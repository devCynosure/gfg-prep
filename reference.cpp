#include <iostream>
using namespace std;

int &fun(){
    static int x = 10;
    static int b = 100;
    return b;   

}

int main(){
    int a,b;
    int &ref = fun();
    cin>>a>>b;
    cout<<fun()<<" ";
    cout<<ref<<" ";
    ref=39;
    cout<<fun();

    return 0;   
}