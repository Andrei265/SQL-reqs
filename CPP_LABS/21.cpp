#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char st[1000];
    cout << "Введите строку(ENG): ";
    cin >> st;
    int n = strlen(st);
    int before = 0, after = 0;
    bool flag = false;
    for (int i = 0; i < n; i++){
        if (st[i] == ';') flag = true;
        if (flag == true) after++;
        else before++;
    }
    cout << "Before: " << before << endl;
    cout << "After: " << after - 1 << endl;
    system("PAUSE");
}