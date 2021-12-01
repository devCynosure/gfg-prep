#include <iostream>
using namespace std;

void reverse(const string &str, int n){
    for(int i = n, j = i; i >= 0; i--){
        if(str[i] == ' ' || i == 0){
            for(int k = i == 0 ? i : i + 1; k <= j; k++){
                cout<<str[k];
            }
            cout<<" ";
            j =  i - 1;
        }
    }
}

int main(){
    string str;
    getline(cin, str);
    reverse(str, str.length());
    return 0;
}