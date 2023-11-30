#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const int n = 10;
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
    double min_abs = arr[0], index_min_abs = 0, sum_abs = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (abs(arr[i]) < min_abs)
        {
            min_abs = abs(arr[i]);
            index_min_abs = i;
        }
        if (arr[i] < 0.0) flag = true;
        if (flag == true) sum_abs += abs(arr[i]);
    }
    cout << "Номер минимального по модулю элемента массива: " << index_min_abs << endl;
    cout << "Сумма модулей элементов массива, расположенных после первого отрицательного элемента: " << sum_abs << endl;
    system("PAUSE");
    return 0;
}
