#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //using for loop
    for(int i=1; i<=n; i++){
        for(int j = 1; j<= i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }

// Using while loop
cout<<endl<<endl;
    int i = 1;
    
    while(n--){
        int j = 1;
        while(j <= i){
            cout<<'*';
            j++;
        }
        cout<<"\n";
        i++;

    }
}