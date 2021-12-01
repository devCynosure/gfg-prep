#include <iostream>
#include <vector>
using namespace std;

// void print(int arr[][2]){
//     for(int i=0; i<3; i++){
//         for(int j=0; j<2; j++){
//             cout<<arr[i][j]<<" ";

//         }
//     }
// }

// int main(){
//     int m = 3, n = 2;
//     int arr[3][2] = {{10,20},{30,40},{50,60}};
//     print(arr);

//Using Double pinter
// void print(int **arr, int m, int n){
//     for(int i = 0; i<m; i++){
//         for(int j = 0; j<n; j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }

// }

// int main(){
//     int m = 3, n = 2;
//     int **arr;
//     arr = new int *[m];
//     for (int i = 0; i < m; i++)
//     {
//         arr[i] = new int[n];
//         for(int j = 0; j<n; j++){
//             arr[i][j] = i+j;
//         }
//     }
//     print(arr, m, n);


//     return 0;
// }
void print(vector<int>arr[], int m){
    for(int i = 0; i<m; i++){
        for(int j=0; j < arr[i].size(); j++){
            cout<<arr[i][j]<<" ";

        }
    }
}
int main(){
    int m = 3, n= 2;
    vector<int> arr[m];
    for(int i = 0; i< m; i++){
        for(int j = 0; j<n; j++){
            arr[i].push_back(i);
        }
    }
    print(arr, m);
    return 0;
}