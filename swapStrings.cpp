#include <iostream>
using namespace std;
void swap(string &str1, string &str2){
    string str3 = str1;
    str1 = str2;
    str2 = str3;
}

int main(){
    string str1, str2;
    cin>>str1>>str2;
    swap(str1, str2);
    cout<<str1<<" "<<str2;
    return 0;
}