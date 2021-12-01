#include <iostream>
#include <iomanip>
using namespace std;

int find_largest(int arr[], int n){
    int largest = arr[0];
    for(int i = 1; i<n; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    return largest;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<find_largest(arr, n);

}