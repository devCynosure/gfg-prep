#include <iostream>
using namespace std;

void table(int num, int range){
    for(int i = 1; i<=range; i++)
    printf("%d * %d = %d\n",num, i, num * i);
}

int main(){
    int num, range;
    cin>>num>>range;
    table(num,range);
    return 0;
}