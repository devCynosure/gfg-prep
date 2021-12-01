#include <iostream>
using namespace std;

int main()
{
    int bin, dgt = 0, base = 1;
    cin >> bin;

    while (bin > 0)
    {
        dgt = dgt + ((bin % 10) * base);
        base = base * 2;
        bin /= 10;
    }
    cout << dgt;
}