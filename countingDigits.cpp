#include<iostream>
using namespace std;

static int count=0;
int counting(int digit){
    if(digit > 0){
        digit /= 10;
        count++;
        cout<<&count<<endl;
        counting(digit);
        
    }
    return count;
}

int main(){
    int digit;
    cin>>digit;
    cout<<counting(digit);
    return 0;
}