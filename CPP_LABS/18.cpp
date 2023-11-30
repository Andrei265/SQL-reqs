#include <iostream>
using namespace std;

int main()
{
    int n = 5; // размер массива
    int *p = new int[2*n];
    for (int *q = p; q != p + 2 * n; q++)
    {
        cin >> *q;
    }
    for (int *q = p; q != p + 2 * n; q++)
    {
        cout << *q << " ";
    }
    system("PAUSE");
    return 0;
}
