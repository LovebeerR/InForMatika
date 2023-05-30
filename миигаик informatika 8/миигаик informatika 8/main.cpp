//
//  main.cpp
//  миигаик informatika 8
//
//  Created by Richard on 16.05.2023.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void sortA(int arr[], int s) {
    int t;
    for (int i = 0; i < s-1; i++) {
        for (int j = 0; j < s-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void sortB(int arr[], int s) {
    int t;
    for (int i = 0; i < s-1; i++) {
        for (int j = 0; j < s-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

int case1() {
    int arr[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 8 + 7;
    }
    cout << "Массив до перезаписи: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > 10) {
            arr[i] -= 10;
        }
    }
    cout << "Массив после перезаписи: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
int case2() {
    int arr[50];
    srand(time(NULL));
    for (int i = 0; i < 50; i++) {
        int r = rand() % 50 * 2 + 1;
        arr[i] = r;
    }
    for (int i = 0; i < 50; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
int case3() {
    srand(time(nullptr));
    const int s = 5;
    int arr1[s], arr2[s], arr3[s];
    int sum = 0, max = 0, min = 100000;
    for (int i = 0; i < s; i++) {
        arr1[i] = rand() % 21 + 10;
        arr2[i] = rand() % 21 + 10;
    }
    for (int i = 0; i < s; i++) {
        arr3[i] = arr1[i] + arr2[i];
        sum += arr3[i];
        if (arr3[i] > max) {
            max = arr3[i];
        }
        if (arr3[i] < min) {
            min = arr3[i];
        }
    }
    double avg = static_cast<double>(sum) / s;
    cout << "Массив 1: ";
    for (int i = 0; i < s; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Массив 2: ";
    for (int i = 0; i < s; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    cout << "Массив 3: ";
    for (int i = 0; i < s; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;
    cout << "Среднее: " << avg << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    return 0;
}
int case4() {
    int s = 10;
    int arr[s];
    srand(time(NULL));
    for (int i = 0; i < s; i++) {
        arr[i] = rand() % 1000 + 1;
    }
    cout << "Массив до обработки: ";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    sortA(arr, s);
    cout << "По возрастанию: ";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    sortB(arr, s);
    cout << "По убыванию: ";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

void maain() {
    int n;
    char e;
    e='y';
    setlocale(LC_ALL, "rus");
    for(;;){
    cout << "Выберите что-то:" << endl;
    cout << "1. Задание 1" << endl;
    cout << "2. Задание 2" << endl;
    cout << "3. Задание 3" << endl;
    cout << "4. Задание 4" << endl;
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
    cout << "Для продолжения нажмите любую кнопку" << endl;
    cout << "Для конца - n" << endl;
    cin >> e;
    if(e=='n') {break;}
    }
}
int main()
{
    maain();
    return 0;
}

