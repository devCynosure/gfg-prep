#include <iostream>
using namespace std;

int palindrome(const string &input1){
    int input1Div2 = input1.length() / 2;
    for(int i = 0, j = (input1.length() - 1); i <= input1Div2, j>= input1Div2; j--, i++){
        if(input1[i] != input1[j])
            return 0;
    }
    return 1;

}

int main(){
    string str;
    getline(cin, str);
    palindrome(str) == 1 ? cout<<"Palindrome \n" : cout<<"Not a Palindrome No \n";
    return 0;

}