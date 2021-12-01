#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < (n - i))
            {
                cout << ' ';
            }
            else if (j >= 0 && j < n)
            {
                cout << '*';
            }
           
        }
        cout << '\n';
    }

}