#include <iostream>
using namespace std;
int gcd(int, int);
int small(int, int);

int small(int a, int b){
    if(a < b)
    return a;
    else return b;
}

int gcd(int num1, int num2){
    int gcd = 0;
    int smallDig = small(num1,num2);
    for(int i = smallDig/2; i>=1; i--){
        if(num1 % i == 0 && num2 % i == 0){
            return i;
        }
    }
    return 0;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
   cout<<gcd(num1,num2);

}