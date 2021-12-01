#include <iostream>
using namespace std;

int main(){
    int n=5;
    int j = n;
    int count = 0;
    while(n){
        count++;
        int i = j;
        while(i){
            if( i > count){
            cout<<' ';
            i--;
            }
            else if(i <= count && i > 0 ){
                cout<<'*';
                i--;
            }
        }
        cout<<endl;
        n--;
    }
}