#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int year;
    cin>>year;
    
    if(year % 100 != 0 && year % 4 == 0){
        cout<<year<<" is a leap year ";

    }else if(year % 400 == 0){
        cout<<year<<" is a leap year ";

    }else{
        cout<<"Its not a leap year ";
    }

    return 0;
}