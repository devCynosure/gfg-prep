#include <iostream>
using namespace std;

double avg(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum +=arr[i];
    }
    return sum / double(n);
}

int main(){
    int arr[]{10,20,40,30};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<avg(arr, n);
    return 0;


}