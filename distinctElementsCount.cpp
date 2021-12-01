#include <iostream>
using namespace std;

int distinct(int temp[], int n){
    int count = 1;
    for(int i = 1; i<n; i++){
        int flag = 0;
        for (int j = i-1; j >= 0; j--)
        {
            /* code */
            if(temp[i] == temp[j])
            flag = 1;
        }
        if(flag){
            
        }
        else{
            count+=1;
        }
        
    }
    return count;
} 


int main(){
    int arr[]{10,2,4,6,2,2,3,4,6,6,3,1,7,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Count of Distinct Elements is "<<distinct(arr, n);
    return 0;
}