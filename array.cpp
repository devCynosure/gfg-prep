#include <iostream>
using namespace std;

int main(){
    int arr[10] = {0};
    for(int i = 0; i< 10; i++){
        cout<<*( arr + i)<<endl;
        
    }
    cout<<"--------------\n";

    for( int e : arr){
        cout<<e<<endl;
    }

    cout<<sizeof(arr) / sizeof(int);

     return 0;
}