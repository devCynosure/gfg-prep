#include <iostream>
using namespace std;


int avg(int arr[], int n){
    if(n == 0){
        throw 0;
    }
    int s=0;
    for(int i =0; i<n; i++){
        s = s + arr[i];
    }
    return s/n;
    
}

int main(){
    int arr[8]{1,3,5,6,7,4,8,4};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    n =0;
    try{

        cout<<avg(arr, n);
    }
    catch(int e){
        cout<<" divided by zero";
    }
}