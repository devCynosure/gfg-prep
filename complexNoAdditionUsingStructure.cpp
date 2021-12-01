#include <iostream>
using namespace std;

struct complex{
    int real;
    int imaginary;
};

void print(complex &num){
    cout<<num.real << " + "<< num.imaginary<<"i";


}
int main(){
    complex num1, num2, total;
    cin>>num1.real>>num1.imaginary;
    cin>>num2.real>>num2.imaginary;
    total.real = num1.real + num2.real;
    total.imaginary = num1.imaginary + num2.imaginary;
    print(total);
    return 0;
}