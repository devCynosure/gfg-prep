#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    

    for(int i = 1; i<=n; i++){
        for(int j = n; j > 0; j--){
            if(j > i){
                cout<<" ";
            }
            else if(j > 0 && j <= i){
                cout<<"*";
            }
        }
        cout<<"\n";

        
    }
    return 0;
}