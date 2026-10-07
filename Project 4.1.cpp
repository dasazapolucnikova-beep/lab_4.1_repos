#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N = 15, i;
    double S;

    // 1) Цикл while
    S = 0;
    i = 1;
    while (i <= N)
    {
        S += (sin(10.0 * i) + cos(10.0 / i)) / sqrt(1.0 * i);
        i++;
    }
    cout << S << endl;

    // 2) Цикл do...while
    S = 0;
    i = 1;
    do {
        S += (sin(10.0 * i) + cos(10.0 / i)) / sqrt(1.0 * i);
        i++;
    } while (i <= N);
    cout << S << endl;

    // 3) Цикл for (i++)
    S = 0;
    for (i = 1; i <= N; i++)
    {
        S += (sin(10.0 * i) + cos(10.0 / i)) / sqrt(1.0 * i);
    }
    cout << S << endl;

    // 4) Цикл for (i--)
    S = 0;
    for (i = N; i >= 1; i--)
    {
        S += (sin(10.0 * i) + cos(10.0 / i)) / sqrt(1.0 * i);
    }
    cout << S << endl;

    return 0;
}