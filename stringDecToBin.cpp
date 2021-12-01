#include <iostream>
#include <algorithm>
using namespace std;


string bin(int dec){
    int i=0; string s = "";
    while(dec>0){
        int t = dec % 2;
        s = s + to_string(t);
        dec /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main(){
    int dec;
    cin>>dec;
    cout<<bin(dec);
    return 0;
}