#include <iostream>
#include <cstring>
using namespace std;

void reverse(string &st){

    for(int i = 0, j = st.length() - 1; i <= (st.length() / 2), j>=(st.length()/2); i++, j--){
        char temp = st[i];
        cout<<st[i]<<" "<<st[j]<<endl; 
        st[i] = st[j];
        st[j] = temp;
    }
    
}

int main(){
    string str;
    getline(cin, str);
    reverse(str);
    cout<<str;
    return 0;

}