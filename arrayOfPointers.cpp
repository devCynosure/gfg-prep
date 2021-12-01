#include <iostream>
using namespace std;

int main(){
    int m=5, n=5;
    int *arr[m];
    for(int i = 0; i<m; i++){
        arr[i] = new int[n];
    }
    
    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            arr[i][j] = i + j;
            cout<< *(*(arr+i) + j)<<" ";
        }
    }
    return 0;

}

// 0 0 0
// 0 1 1
// 0 2 2
// 0 3 3
// 0 4 4
// 1 0 1
// 1 1 2 
// 1 2 3
// 1 3 4
// 1 4 5
// 2 0 2
// 2 1 3 
