#include <iostream>
using namespace std;

typedef struct student{
    int rNo;
    string fName, sName;
}Std;

int main(){
    Std s;
    s.rNo = 101;
    s.fName = "Rajesh ";
    s.sName = "Chu ";
    cout<<s.rNo<<" "<<s.fName<<" "<<s.sName;
}