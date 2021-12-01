#include <iostream>
using namespace std;

int main(){
    int arr[]{10,23,25,32,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(n <= 1) cout<<"yes";
    else{
        int f = 1;
        for (int i = 0; i < n-1; i++)
        { /* code */
            if(arr[i+1] < arr[i]){
                f = 0;
            }
        }
        if(f == 1) cout<<"Sorted Array ";
        else cout<<"Unsorted Array ";
    }
    return 0;
    
}