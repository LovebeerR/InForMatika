//
//  main.cpp
//  миигаик informatika 9
//
//  Created by Richard on 16.05.2023.
//
#include <iostream>
using namespace std;

int** allocateMatrix(int rows, int cols) {
    int **matrix = new int*[rows];
    for(int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    return matrix;
}

void fillMatrix(int **matrix, int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Строка " << i << " и коллона " << j << ": ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int **matrix, int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplyMatrixByNumber(int **matrix, int rows, int cols, int number) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            matrix[i][j] *= number;
        }
    }
}

void addMatrices(int** matrix1, int** matrix2, int** result, int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrices(int** matrix1, int** matrix2, int** result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void matrix_multiply(int **A, int **B, int **C, int m, int n, int k) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < k; j++) {
            C[i][j] = 0;
            for(int l = 0; l < n; l++) {
                C[i][j] += A[i][l] * B[l][j];
            }
        }
    }
}

void transposeMatrix(int** matrix, int rows, int cols, int** transposed) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int case1(){
    int rows, cols;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;
    int** matrix1 = new int*[rows];
    int** matrix2 = new int*[rows];
    int** result = new int*[rows];
    for(int i = 0; i < rows; i++) {
        matrix1[i] = new int[cols];
        matrix2[i] = new int[cols];
        result[i] = new int[cols];
    }
    cout << "Введите элементы первой матрицы: " << endl;
    fillMatrix(matrix1, rows, cols);
    cout << "Матрица 1:" << endl;
    printMatrix(matrix1, rows, cols);
    cout << "Введите элементы второй матрицы: " << endl;
    fillMatrix(matrix2, rows, cols);
    cout << "Матрица 2:" << endl;
    printMatrix(matrix2, rows, cols);
    addMatrices(matrix1, matrix2, result, rows, cols);
    cout << "Результат:" << endl;
    printMatrix(result, rows, cols);
    for(int i = 0; i < rows; i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] result[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] result;
    return 0;
}
int case2(){
    int rows, cols;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;
    int** matrix1 = new int*[rows];
    int** matrix2 = new int*[rows];
    int** result = new int*[rows];
    for(int i = 0; i < rows; i++) {
        matrix1[i] = new int[cols];
        matrix2[i] = new int[cols];
        result[i] = new int[cols];
    }
    cout << "Введите элементы первой матрицы: " << endl;
    fillMatrix(matrix1, rows, cols);
    cout << "Матрица 1:" << endl;
    printMatrix(matrix1, rows, cols);
    cout << "Введите элементы второй матрицы: " << endl;
    fillMatrix(matrix2, rows, cols);
    cout << "Матрица 2:" << endl;
    printMatrix(matrix2, rows, cols);
    subtractMatrices(matrix1, matrix2, result, rows, cols);
    cout << "Результат:" << endl;
    printMatrix(result, rows, cols);
    for(int i = 0; i < rows; i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] result[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] result;
    return 0;
}
int case3(){
    int rows, cols, number;
    cout << "Введите количество строк в матрице: ";
    cin >> rows;
    cout << "Введите количество столбцов в матрице: ";
    cin >> cols;
    int **matrix = allocateMatrix(rows, cols);
    cout << "Введите значения матрицы:" << endl;
    fillMatrix(matrix, rows, cols);
    cout << "Матрица:" << endl;
    printMatrix(matrix, rows, cols);
    cout << "Введите число, на которое нужно умножить матрицу: ";
    cin >> number;
    multiplyMatrixByNumber(matrix, rows, cols, number);
    cout << "Полученная матрица:" << endl;
    printMatrix(matrix, rows, cols);
    for(int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}
int case4(){
    int m, n, k;
    cout << "Количество строк матрицы 1: " << endl;
    cin >> m;
    cout << "Количество солбцов матрицы 1 и строк матрицы 2: " << endl;
    cin >> n;
    cout << "Количество столбцов матрицы 2: " << endl;
    cin >> k;
    int **A, **B, **C;
    A = new int*[m];
    B = new int*[n];
    C = new int*[m];
    for(int i = 0; i < m; i++) {
        A[i] = new int[n];
        C[i] = new int[k];
    }
    for(int i = 0; i < n; i++) {
        B[i] = new int[k];
    }
    cout << "Введите элементы матрицы A:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }
    cout << "Матрица 1:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Введите элементы матрицы B:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }
    cout << "Матрица 2:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    matrix_multiply(A, B, C, m, n, k);
    cout << "Результат умножения матриц A и B:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < k; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < m; i++) {
        delete [] A[i];
        delete [] C[i];
    }
    for(int i = 0; i < n; i++) {
        delete [] B[i];
    }
    delete [] A;
    delete [] B;
    delete [] C;
    return 0;
}
int case5(){
    int rows, cols;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;
    int **matrix = allocateMatrix(rows, cols);
    int **transposed = allocateMatrix(rows, cols);
    cout << "Введите значения матрицы:" << endl;
    fillMatrix(matrix, rows, cols);
    cout << "Матрица:" << endl;
    printMatrix(matrix, rows, cols);
    transposeMatrix(matrix, rows, cols, transposed);
    cout << "Результат:" << endl;
    printMatrix(transposed, cols, rows);
    return 0;
}

void maain() {
    int n;
    char e;
    e = 'y';
    setlocale(LC_ALL, "rus");
    for(;;){
        cout << "Выберите что-то:" << endl;
        cout << "1. Сложение матриц" << endl;
        cout << "2. Вычитание матриц" << endl;
        cout << "3. Умножение матрицы на число" << endl;
        cout << "4. Умножение матрицы на матрицу" << endl;
        cout << "5. Транспонирование матрицы" << endl;
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
        cout << "Для продолжения нажмите любую клавишу" << endl;
        cout << "Для отключения программы - n" << endl;
        cin >> e;
        if(e == 'n') {break;}
    }
}

int main(){
    maain();
    return 0;
}

