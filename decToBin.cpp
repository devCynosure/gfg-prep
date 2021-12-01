#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int bin[10];
    int i = 0;

    while (num > 0)
    {
        
        
            bin[i] = num % 2;
            cout<<"print bin[i] "<<bin[i]<<endl;
            i++;
            num /= 2;

        for (int i = 5 - 1; i >= 0; i--)
        {
            cout << bin[i] << endl;
        }
    }
    return 0;
}