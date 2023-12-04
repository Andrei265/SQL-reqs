#include <iostream>

using namespace std;

int main(){
    const int n = 3;
    double a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "Введите элемент: a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
    double min = a[0][0];
    int min_index = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] < min){
                min = a[i][j];
                min_index = i;
            }
        }
    }
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[min_index][i];
    }
    cout << "Сумма элементов строки, в которой расположен элемент с наименьшим значением: " << sum;
}