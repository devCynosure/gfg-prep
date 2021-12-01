#include <iostream>
using namespace std;
class student{
    public:
    string name;
    void pprint(){
        cout<<name;
    }
};

class mca : public student{};

int main(){

    mca m;
    m.name = "Sharan ";

    return 0;

}