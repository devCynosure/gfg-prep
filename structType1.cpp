#include <iostream>
using namespace std;

struct student{
    int rNo;
    string fName, sName;
    string mobNo;
};

int main(){

    struct student std = {01, "Sharan", "Prakash", "9496044825"};
    cout<<std.rNo<<" "<<std.fName<<" "<<std.sName<<" "<<std.mobNo;
    // printf("%d %s %s %s ",std.rNo, std.fName, std.sName, std.mobNo); error

    return 0;
}