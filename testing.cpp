#include <iostream>
#include <iomanip>

using namespace std;
extern int a;
static int x;
const float C = 12.00;
static const int B = 100;

int main(){
    cout<<std::uppercase;
    {
        static int x = 10;
        x = 100;
        cout<<x<<endl;
    }
    cout<<"sharan prakash"<<endl;
    auto* check = &C;
    // *check = 23; throws error assignment of read-only location '* check'
    int a = 10;
    cout<<a<<" "<< "hi"<<" "<<x<<" "<<B<<" "<<C<<" "<<check<<" "<<&C<<" ";
    int bin, hex, oct;
    bin = 0b11;
    hex = 0x1A;
    oct = 016;
    bool isBool = false;
    string path = "c:\\simple\\text.txt";
    double z = static_cast<double>(a)/C;
    cout<<std::boolalpha;
    cout<<bin<<" "<< hex<<" "<<oct<<" "<<z<<" "<<path<<" "<<isBool<<" "<<&C<<" ";
    cout<<"\n";
    cout<<std::hex;
    cout<<bin<<" "<< hex<<" "<<oct<<" "<<z<<" "<<path<<" "<<isBool<<" "<<&C<<" ";
    {   
        cout<<std::dec;
        cout<<std::showbase;
        cout<<std::showpos;
        int a = 19;
        cout<<a;
        
    }   

    {
        cout<<"\n";
        string str = "Sharan";
        for (int i = 1; i <= 10; i++)
        {
            
            cout<<std::setfill('*');
            cout<<std::noshowpos;

            cout<<std::left;
            cout<<std::setw(i);
            cout<<i;

            cout<<std::setw(i);
            cout<<std::right;
            cout<<i<<endl;
        }
        
        // cout<<std::setw(20);
        // cout<<std::setfill('*');
        // cout<<str;
        {
            cout<<std::uppercase;
            cout<<"Sharan Prakash";
        }
    }

    return 0;
}