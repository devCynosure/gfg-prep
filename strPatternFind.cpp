#include <iostream>
using namespace std;

void printPat(string str, string pat){

    for(int i = 0; i< str.length(); i++){
        int j = 0;
        if(str[i] == pat[j]){
            for(; j < pat.length(); ++j, ++i){
                if(str[i] != pat[j]){
                    break;
                }
                else if(j == pat.length()-1){
                    int len = pat.length()-1;
                    cout<<i - len<<" ";
                    break;
                }

            }
        }
    }

}

int main(){
    string str, pat;
    getline(cin, str);
    cin>>pat;
    printPat(str, pat);
    return 0;
}