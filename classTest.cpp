#include <iostream>
using namespace std;

class student{
    public:
    int sno;
    string name;
};

int main(){
    student std;
    std.sno = 10;
    std.name = "sharan ";
    cout<<std.sno<<" "<<std.name;

}