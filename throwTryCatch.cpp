#include <iostream>
using namespace std;

int avg(int arr[], int n){
    if(n == 0){
        throw string("No is zero");
    }
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + i;
    }
    return sum/n;
}

int main(){
    int a[]{4,5,6,3,1};
    int n = 0;
    cin>>n;
    int res;
    try{
        res = avg(a,n);
    }
    catch(string s){
        cout<<s;
    }
    cout<<res;
    return 0;
}
