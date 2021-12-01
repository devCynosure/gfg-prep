#include <iostream>
#include <cstring>
using namespace std;

int bin(const string &st){
    int base = 1, decimal = 0;
    for(int i = st.length()-1; i >=0 ; i--){
        cout<<((int)(st[i] -'0'))<<" * "<<base<<endl;
        decimal += ((int)(st[i] -'0')) * base;
        base *= 2;
    }
    return decimal;
}
int main(){
    string str;
    cin>>str;
    cout<<bin(str);
    return 0;

}