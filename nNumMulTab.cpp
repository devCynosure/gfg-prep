#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < 11; j++){
            printf("%d * %d = %d \n", i, j, i * j);
        }
        printf("********************\n");
    }
}