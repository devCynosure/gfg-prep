#include <iostream>
using namespace std;

int arrSum(int* arr, int n){
    int sum;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr[]{1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<arrSum(arr, n);
    return 0;
}