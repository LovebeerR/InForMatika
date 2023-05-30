//
//  main.cpp
//  миигаик informatika 7
//
//  Created by Richard on 16.05.2023.
//
#include <iostream>
#include <iomanip>
#include <clocale>
#include <cstdlib>
#include <math.h>
using namespace std;
int case1() {
    int a, b, *p_a, *p_b;
    cout << "Введите a:" << endl;
    cin >> a;
    cout << "Введите b:" << endl;
    cin >> b;
    p_a=&a;
    p_b=&b;
    *p_a *=2;
    *p_b=*p_b+*p_a;
    *p_a=*p_b-*p_a;
    *p_b=*p_b-*p_a;
    cout << "Переменная a - " << a << endl;
    cout << "Переменная b - " << b << endl;
    return 0;
}
int case2() {
    int a, b, *p_a, *p_b;
    cout << "Введите a:" << endl;
    cin >> a;
    cout << "Введите b:" << endl;
    cin >> b;
    p_a=&a;
    p_b=&b;
    if(*p_a>*p_b){
        *p_a *=2;
    }
    else {
        *p_b /=2;
    }
    cout << "Переменная a - " << a << endl;
    cout << "Переменная b - " << b << endl;
    return 0;
}
int case3() {
    int a, b, c, *p_a, *p_b, *p_c;
    cout << "Введите a:" << endl;
    cin >> a;
    cout << "Введите b:" << endl;
    cin >> b;
    cout << "Введите c:" << endl;
    cin >> c;
    p_a=&a;
    p_b=&b;
    p_c=&c;
    *p_a *=2;
    *p_b=*p_b+*p_c;
    *p_c=*p_b-*p_c;
    *p_b=*p_b-*p_c;
    cout << "Переменная a - " << a << endl;
    cout << "Переменная b - " << b << endl;
    cout << "Переменная c - " << c << endl;
    return 0;
}
int case4() {
    float a, b, c, *p_a, *p_b, *p_c;
    cout << "Введите a:" << endl;
    cin >> a;
    cout << "Введите b:" << endl;
    cin >> b;
    cout << "Введите c:" << endl;
    cin >> c;
    p_a=&a;
    p_b=&b;
    p_c=&c;
    *p_c *=3;
    *p_a=*p_a+*p_c;
    *p_c=*p_a-*p_c;
    *p_a=*p_a-*p_c;
    cout << "Переменная a - " << a << endl;
    cout << "Переменная b - " << b << endl;
    cout << "Переменная c - " << c << endl;
    return 0;
}
int case5() {
    char a, b, *p_a, *p_b;
    cout << "Введите a:" << endl;
    cin >> a;
    cout << "Введите b:" << endl;
    cin >> b;
    p_a=&a;
    p_b=&b;
    *p_b=*p_b+*p_a;
    *p_a=*p_b-*p_a;
    *p_b=*p_b-*p_a;
    cout << "Переменная a - " << a << endl;
    cout << "Переменная b - " << b << endl;
    return 0;
}


void maain() {
    int n;
    setlocale(LC_ALL, "rus");
    cout << "Выберите что-то:" << endl;
    cout << "1. Увеличивает a в 2 раза и меняет местами a и b" << endl;
    cout << "2. Если a>b, то a увеличивает в 2 раза, иначе b уменьшает в 2 раза" << endl;
    cout << "3. Увеличивает a в 2 раза и меняет c и b местами" << endl;
    cout << "4. Вещественные переменные. Увеличивает c в 3 раза и меняет местами a и c" << endl;
    cout << "5. Символьные переменные. Поменять местами a и b" << endl;
    cin >> n;
    switch(n) {
        case 1:
        case1();
        break;
        case 2:
        case2();
        break;
        case 3:
        case3();
        break;
        case 4:
        case4();
        break;
        case 5:
        case5();
        break;
    }
}
int main()
{
    maain();
    return 0;
}

