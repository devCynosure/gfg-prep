#include <iostream>
using namespace std;

void div(int n){
    if(n > 1 ){
        for(int i = 2; i<=n; i++){
            if(n % i == 0){
                cout<<i;
                break;
            }
        }
    }else{
        cout<<" input is 1 or less ";
    }
}

int main(){
    int n;
    cin>>n;
    div(n);
    return 0;

}