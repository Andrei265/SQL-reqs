#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 5; // размер массива
    int *p = new int[2*n];
    double dist = 0;
    for (int *q = p; q != p + 2 * n; q++)
    {
        cin >> *q;
    }
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (dist < sqrt(p[i] * p[i] + p[i + 1] * p[i + 1]))
        {
            dist = sqrt(p[i] * p[i] + p[i + 1] * p[i + 1]);
        }
    }
    cout << "Минимальный радиус окружности с центром в начале координат, которая содержит все точки: " << dist << endl;
    delete [] p;
    system("PAUSE");
    return 0;
}
