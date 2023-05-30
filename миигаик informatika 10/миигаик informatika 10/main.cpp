//
//  main.cpp
//  миигаик informatika 10
//
//  Created by Richard on 16.05.2023.
//
#include <iostream>
#include <iomanip>
#include <clocale>
#include <cstdlib>
#include <math.h>
using namespace std;

double* c1(double Xa=0, double Ya=0, double d=0, double a=0, double b=0, double c=0, bool visible=false){
    double Xb, Yb;
    double ff=(a+b/60+c/3600)*M_PI/180;
    float dX=d*cos(ff);
    float dY=d*sin(ff);
    if((ff>=0) and (ff<=90))
    {
        Xb=Xa+dX;
        Yb=Ya+dY;
    }
    if((ff>=90) and (ff<=180))
    {
        Xb=Xa-dX;
        Yb=Ya+dY;
    }
    if((ff>=180) and (ff<=270))
    {
        Xb=Xa-dX;
        Yb=Ya-dY;
    }
    if((ff>=270) and (ff<=360))
    {
        Xb=Xa+dX;
        Yb=Ya-dY;
    }
    if(visible==true){
        cout << Xb << endl;
        cout << Yb << endl;
    }
    static double answer[]={Xb, Yb};
    return answer;
}

double* c2(double Xa=0, double Ya=0, double Xb=0, double Yb=0, bool visible=false){
    double r, ff, m, b, g, c, d;
    float dX, dY;
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
    m=floor(ff);
    b=floor(60*(ff-m));
    g=b;
    c=floor(3600*(ff-m)-60*g);
    if(visible==true){
    cout << "Горизонтальное проложение=" << d << fixed << setprecision(2) << endl;
    cout << "Градусы, минуты, секунды:" << m << "° " << fixed << setprecision(0) << b << "' " << c << "''" << endl;
    }
    static double answer[]={d, m, b, c};
    return answer;
}

double* c3(double ff, bool visible=false){
    double d,b,c,g;
    d=floor(ff);
    b=floor(60*(ff-d));
    g=b;
    c=floor(3600*(ff-d) - 60*g);
    if(visible==true){
    cout << "Градусы, минуты, секунды:" << d << "° " << fixed << setprecision(0) << b << "' " << c << "''" << endl;
    }
    static double answer[]={d, b, c};
    return answer;
}

double* c4(double a=0, double b=0, double c=0, bool visible=false){
    double ff;
    ff = a+b/60+c/3600;
    if(visible=true){
    cout << "Десятичные градусы (deg):" << ff;
    }
    static double answer[]={ff};
    return answer;
}

void case1(){
    double Xa, Ya, d, a, b, c;
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
    double* data = c1(Xa,Ya,d,a,b,c);
    cout << data[0] << " " << data[1] << endl;
}

void case2(){
    double Xa, Ya, Xb, Yb;
    cout << "Xa=" << endl;
    cin >> Xa;
    cout << "Ya=" << endl;
    cin >> Ya;
    cout << "Xb=" << endl;
    cin >> Xb;
    cout << "Yb=" << endl;
    cin >> Yb;
    double* data = c2(Xa,Ya,Xb,Yb);
    cout << data[0] << " " << data[1] << " " << data[2] << " " << data[3] << endl;
}

void case3(){
    double ff;
    cout << "Введите десятичные крадусы (deg):" << endl;
    cin >> ff;
    double* data =c3(ff);
    cout << data[0] << " " << data[1] << " " << data[2] << endl;
}

void case4(){
    double a, b, c;
    cout << "Введите исходные данные:" << endl;
    cout << "Введите градусы" << endl;
    cin >> a;
    cout << "Введите минуты" << endl;
    cin >> b;
    cout << "Ведите секунды" << endl;
    cin >> c;
    cout << "Вы ввели:" << a << "° " << b << "' " << c << "'' " << endl;
    double* data=c4(a,b,c);
    cout << data[0] << endl;
}

void sw(){
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Список действий:" << endl;
    cout << "1. Прямая геодезическая задача" << endl;
    cout << "2. Обратная геодезическая задача" << endl;
    cout << "3. Из десятичных" << endl;
    cout << "4. Из обычных" << endl;
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
    }
}

int main()
{
    sw();
    return 0;
}

