#include <iostream>
using namespace std;

struct point{
    int x;
    int y;
};

void print(point *ptr){
    cout<<ptr->x<<" "<<ptr->y;
}

int main(){
    point p = {10, 20}; 
    point *ptr = &p;
    cout<<ptr -> x<<" "<<ptr -> y<<endl;
    print(ptr);
    return 0;
}