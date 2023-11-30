#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const int n = 10;
    double arr[n], a, b;
    cout << "Введите левую границу: ";
    cin >> a;
    cout << "Введите правую границу: ";
    cin >> b;
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
    double min_abs = arr[0], index_min_abs = 0, sum_abs = 0;
    int last = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= a and arr[i] <= b)
        {
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j+1];
            }
            last++;
            i--;
        }
    }
    for (int i = n - 1; i >= n - last; i--)
    {
        arr[i] = 0;
    }
    cout << "[ ";
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << arr[n] << " ]" << endl;
    system("PAUSE");
    return 0;
}
