#include <iostream>
using namespace std;

int main(){
    int input;
    cout<<"Enter the Number: ";
    cin>>input;

    {
        int lastDigit = abs(input) % 10;
        cout<< lastDigit;
    }
}