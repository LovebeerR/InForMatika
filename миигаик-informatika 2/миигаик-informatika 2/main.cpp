
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int degrees, minutes, seconds; // переменные для градусов, минут и секунд
    double decimalDegrees; // переменная для десятичных градусов

    cout << "Введите количество градусов: ";
    cin >> degrees;
    cout << "Введите количество минут: ";
    cin >> minutes;
    cout << "Введите количество секунд: ";
    cin >> seconds;

    decimalDegrees = degrees + ((double)minutes / 60) + ((double)seconds / 3600); // формула для перевода

    cout << degrees << " градусов " << minutes << " минут " << seconds << " секунд" << endl;
    cout << "равно " << decimalDegrees << " градусов" << endl;

    return 0;
}

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//    double decimalDegrees; // переменная для десятичных градусов
//    int degrees, minutes, seconds; // переменные для градусов, минут и секунд
//
//    cout << "Введите количество градусов: ";
//    cin >> decimalDegrees;
//
//    degrees = (int)decimalDegrees; // получаем целую часть
//    double decimalMinutes = (decimalDegrees - degrees) * 60; // получаем десятичную дробь минут
//    minutes = (int)decimalMinutes; // получаем целую часть минут
//    double decimalSeconds = (decimalMinutes - minutes) * 60; // получаем десятичную дробь секунд
//    seconds = (int)decimalSeconds; // получаем целую часть секунд
//
//    // выводим результат на экран
//    cout << decimalDegrees << " градусов" << endl;
//    cout << "равно " << degrees << "° " << minutes << "' " << seconds << "''" << endl;
//
//    return 0;
//}
