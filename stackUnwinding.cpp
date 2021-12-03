#include <iostream>
using namespace std;

int fun2(){
    cout<<"Fun2 Begins.."<<endl;
    throw 100;
    cout<<"Fun2 Ends"<<endl;
    return 0;
}
int fun1(){
    cout<<"Fun1 Begins.."<<endl;
    fun2();
    cout<<"Fun1 Ends"<<endl;
    return 0;
}

int main(){
    try{
        fun1();
    }catch(int i){
        cout<<"Encountered an Exception"<<endl;

    }
    return 0;
}