#include <iostream>
using namespace std;

int main()
{
    int norange, skipmultiples;
    cin >> norange >> skipmultiples;

    for (int i = 1; i <= norange; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if ((i * j) % skipmultiples == 0)
            {
                continue;
            }
            else
            {
                printf("%d * %d = %d \n", i, j, i*j);
            }
        }
    }
}