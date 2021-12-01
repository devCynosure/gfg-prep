#include <iostream>
using namespace std;

void fun(int *arr){
    int n = sizeof(arr) / sizeof(arr+1);
    cout<<arr+1<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr+1)<<endl;
    cout<<sizeof(*(arr+0))<<endl;
    cout<<"size inside fun() "<< n <<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<*(arr+i)<<" ";
    }
    
}


int main(){
    int arr[] = {10,20,30,40};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<*(arr+i)<<endl;
    }
    cout<<n<<endl;
    fun(arr);
    return 0;

    
}