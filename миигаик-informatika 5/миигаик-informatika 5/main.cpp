#include <iostream>
#include <iomanip>
#include <clocale>
#include <cstdlib>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n, s, i, k, max, min, age;
    char e='n';
    cout << "1. Сумма всех чётных чисел от 11 до 69" << endl;
    cout << "2. Факториал числа" << endl;
    cout << "3. Решение задачи 4" << endl;
    cin >> n;
    switch(n) {
        case 1:
        for(i=1; i<=69; i++) {
            if (i%2==0) {
                s=s+i;
            }
        }
        cout << "Сумма всех чётных чисел от 11 до 69: " << s << endl;
        break;
        case 2:
        for(;;){
        cout << "Введите число:" << endl;
        cin >> k;
        s=1;
        for(i=1;i<=k;i++) {
            s=s*i;}
            cout << "Факториал равен:" << s << endl;
            cout << "Хотите ли ещё раз?" << endl;
            cout << "Y - да, N - нет" << endl;
            cin >> e;
            if(e!='Y' and e!='y') {
            break; }
            else {s=0;}
        }
        break;
        case 3:
        max=0;
        min=1000;
        cout << "Сколько посетило вуз?" << endl;
        cin >> k;
        for(i=0; i<=k; i++) {
            cout << "Введите возраст:" << endl;
            cin >> age;
            if (age<min) {min=age;}
            if (age>max) {max=age;}
            }
            cout << "Самый старший - " << max << endl;
            cout << "Самый младший - " << min << endl;
        }
        return 0;
        }
