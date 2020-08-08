//Умножить все положительные элементы массива на квадрат наименьшего элемента,
//а все отрицательные - на квадрат наибольшего элемента.
//Вывести исходный и сформирован массивы, а также найдены минимум и максимум.

//Multiply all positive elements in the array by the square of the smallest element,
//and all negative elements by the square of the largest element.
//Output the originaland formed arrays, as well as the minimumand maximum found.

#include <iostream>
#include <ctime>
#include "math.h"
using namespace std;

int main()
{
    const int n = 13;
    int P[n];
    int a, b, m, l, j, min, max; //Объявляем константу размера массива, массив и переменные

    cout << "Load a and b \n";
    cout << "a = ";
    cin >> a;
    cout << "\n";
    cout << "b = ";
    cin >> b;
    cout << "\n"; //Вводим границы промежутка

    srand(time(0));

    m = (b - a) + 1;

    for (int i = 0; i < n; i++) {
        P[i] = rand() % m + a;
    }; //Заполняем массив случайными числами из промежутка


    for (int i = 0; i < n; i++) {
        cout << P[i] << " ";
    }; //Выводим массив

    cout << "\n";

    max = P[0];
    for (int i = 0; i < n; i++)
        if (P[i] > max) max = P[i];
    cout << "max = " << max << "\n"; //Ищем максимальный элемент и выводим

    min = P[0];
    for (int i = 0; i < n; i++)
        if (P[i] < min) min = P[i];
    cout << "min = " << min << "\n"; //Ищем минимальный элемент и выводим

    for (int i = 0; i < n; i++) {
        if (P[i] > 0)
            P[i] = P[i] * pow(min, 2);
    } //Ищем положительные и умножаем их на квадрат минимального элемента

    for (int i = 0; i < n; i++) {
        if (P[i] < 0)
            P[i] = P[i] * pow(max, 2);
    } //Ищем отрицательные и умножаем их на квадрат максимального элемента

    for (int i = 0; i < n; i++) {
        cout << P[i] << " ";
    }; //Выводим измененный массив

    return 0;

}
