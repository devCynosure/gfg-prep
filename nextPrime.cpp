#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int flag = 1;
    

    while(flag){
        int i = 2;
        num++;
        while(i<=num){
            if(num == i){
                cout<<num;
                flag=0;
                break;
            }
            else if(num % i == 0){
                break;
            }
            else{
                i++;
            }
        }
    }
}