#include <iostream>
using namespace std;

int main()
{
    cout<<std::showpos;
    int n = 0;
    cout<<"Enter the number: ";
    cin>>n;

    if(n > 0){
        if(n % 2 == 0){
            cout<<"Positive Even Number ";
        }else{
            cout<<"Positive Odd Number ";
        }
    }
    else if(n < 0){
        if(n % 2 == 0){
            cout<<"Negative Even Number ";
        }
        else{
            cout<<"Negative Odd Number ";
        }
    }
    else{
        cout<<"You Have Entered 0 Or Other Than Numberic Value(s)";
    }


    return 0;
}
