#include <iostream>
using namespace std;

class Complex{
    private:
    int real, imag;
    public:
    Complex(int a=0, int b=0):real(a),imag(b){};
    Complex operator+(Complex const &obj){
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;

        
    }
    void print(){ cout<<real<<"+i"<<imag<<endl;}

};

int main(){
    Complex c1(10,20), c2(20, 40);
    Complex c3 = c1 + c2;
    c3.print();

return 0;
}