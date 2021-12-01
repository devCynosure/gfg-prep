#include <iostream>
#include <iomanip>
using namespace std;

int main(){

int op, a, b;
cout<<"Enter the Operation to 2 numbers ";
cin>>a>>b;
cout<<"Select the operation \n 1. Additon \n 2. Substraction \n 3. Multiplication \n 4. Division\n";

cin>>op;

if(op == 1){
    cout<<a+b;
}else if(op == 2){
    cout<<a-b;
}else if(op == 3){
    cout<<a*b;
}else if(op == 4){
    cout<<a/b;
}


    return 0;
}