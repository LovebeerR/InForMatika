//
//  main.cpp
//  миигаик informatika 6
//
//  Created by Richard on 16.05.2023.
//
#include <iostream>
#include <iomanip>
#include <clocale>
#include <cstdlib>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int sw, n, k;
    cout << "Выберите:" << endl;
    cout << "1. первая задача" << endl;
    cout << "2. вторая задача" << endl;
    cout << "3. третья задача" << endl;
    cin >> sw;
    switch(sw) {
        case 1:
        cout << "Введите n" << endl;
        cin >> n;
        while(n>1) {
            n /= 3;
            k++;
        }
        cout << "Ответ - " << k << endl;
        break;
        case 2:
        cout << "Введите n" << endl;
        cin >> n;
        while (n != 0) {
            k = n % 10;
            cout << k << " ";
            n = n / 10;
        }
        cout << endl;
        break;
        case 3:
        double p, s = 10, d = 10;
        k=1;
        cout << "Введите P" << endl;
        cin >> p;
        while (s <= 200) {
            d *= 1 + p / 100;
            s += d;
            k++;
        }
        cout << "Суммарный пробег: " << s << " км\n";
        cout << "Количество дней: " << k << endl;
        break;
    }
    return 0;
}
