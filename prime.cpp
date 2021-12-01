#include <iostream>
using namespace std;

bool prime(int a){
    cout<<std::boolalpha;
    for(int i = 2; i < a; i++){
       if(a %  i == 0){
           return 0;
       }
    }
    return 1;
}

int main(){
    int num;
    cin>>num;
    cout<< (prime(num)?"Prime":"Not prime");

    return 0;

}