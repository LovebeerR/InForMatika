//
//  main.cpp
//  миигаик informatika 3
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
    setlocale(LC_ALL, "Russian");
    int n, m, g;
    double a, b, c, ff, r, Xa, Ya, d, Xb, Yb;
    float dX, dY;
    cout << "Список действий:" << endl;
    cout << "1. Прямая геодезическая задача" << endl;
    cout << "2. Обратная геодезическая задача" << endl;
    cout << "3. Из десятичных" << endl;
    cout << "4. Из обычных" << endl;
    cin >> n;
    switch(n) {
        case 1:
        cout << "Введите начальные координаты:" << endl;
        cout << "Xa=" << endl;
        cin >> Xa;
        cout << "Ya=" << endl;
        cin >> Ya;
        cout << "Введите горизонтальное проложение линии:" << endl;
        cin >> d;
        cout << "Введите дирекционный угол" << endl;
        cout << "Градусы:" << endl;
        cin >> a;
        cout << "Минуты:" << endl;
        cin >> b;
        cout << "Секунды:" << endl;
        cin >> c;
        ff=(a+b/60+c/3600)*M_PI/180;
        dX=d*cos(ff);
        dY=d*sin(ff);
        if((ff>=0) and (ff<=90))
        {
           cout << "Xb=" << Xa+dX << endl;
           cout << "Yb=" << Ya+dY << endl;
        }
        if((ff>=90) and (ff<=180))
        {
           cout << "Xb=" << Xa-dX << endl;
           cout << "Yb=" << Ya+dY << endl;
        }
        if((ff>=180) and (ff<=270))
        {
           cout << "Xb=" << Xa-dX << endl;
           cout << "Yb=" << Ya-dY << endl;
        }
        if((ff>=270) and (ff<=360))
        {
           cout << "Xb=" << Xa+dX << endl;
           cout << "Yb=" << Ya-dY << endl;
        }
        break;
        case 2:
        cout << "Xa=" << endl;
        cin >> Xa;
        cout << "Ya=" << endl;
        cin >> Ya;
        cout << "Xb=" << endl;
        cin >> Xb;
        cout << "Yb=" << endl;
        cin >> Yb;
        dX=Xb-Xa;
        dY=Yb-Ya;
        r=atan(fabs(dY/dX));
        r=180/M_PI*r;
        if((dX>0) and (dY>0))
        {
            ff=r;
        }
        if((dX<0) and (dY>0))
        {
            ff=180-r;
        }
        if((dX<0) and (dY<0))
        {
            ff=r+180;
        }
        if((dX>0) and (dY<0))
        {
            ff=360-r;
        }
        d=sqrt(dX*dX+dY*dY);
        m=ff;
        b=60*(ff-m);
        g=b;
        c=3600*(ff-m)-60*g;
        cout << "Горизонтальное проложение=" << d << fixed << setprecision(2) << endl;
        cout << "Градусы, минуты, секунды:" << m << "° " << fixed << setprecision(0) << b << "' " << c << "''" << endl;
        break;
        case 3:
        cout << "Введите исходные данные:" << endl;
        cout << "Введите десятичные крадусы (deg):" << endl;
        cin >> ff;
        cout << "Вы ввели:" << ff << endl;
        d=ff;
        b=60*(ff-d);
        g=b;
        c=3600*(ff-d) - 60*g;
        cout << "Градусы, минуты, секунды:" << d << "° " << fixed << setprecision(0) << b << "' " << c << "''" << endl;
        break;
        case 4:
        cout << "Введите исходные данные:" << endl;
        cout << "Введите градусы" << endl;
        cin >> a;
        cout << "Введите минуты" << endl;
        cin >> b;
        cout << "Ведите секунды" << endl;
        cin >> c;
        cout << "Вы ввели:" << a << "° " << b << "' " << c << "'' " << endl;
        double ff;
        ff = a+b/60+c/3600;
        cout << "Десятичные градусы (deg):" << ff;
        break;
    }
    return 0;
}
