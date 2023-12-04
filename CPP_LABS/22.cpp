#include <iostream>
#include <ctime>

using namespace std;

double func(double [], double [], int, int);

int main(){
    srand(time(0));
    int n = 5, m = 5;
    double X[n], Y[m];
    for (int i = 0; i < n; i++) X[i] = rand() % 10;
    for (int i = 0; i < m; i++) Y[i] = rand() % 10;
    cout << "| ";
    for (int i = 0; i < n; i++) cout << X[i] << " | ";
    cout << endl << "| ";
    for (int i = 0; i < m; i++) cout << Y[i] << " | ";
    cout << endl << func(X, Y, n, m) << endl;
    system("PAUSE");
}

double func(double X[], double Y[], int n, int m)
{
    double s1 = 0, s2 = 0;
    for (int i = 0; i < n; i+=2) s1 += X[i];
    for (int i = 0; i < m; i+=2) s2 += Y[i];
    return ((s1 + s2) / 2);
}