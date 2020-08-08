//Разработать программу, соблюдая следующие требования :
//-использовать статические массивы;
//-число n(количеств во элементов массива) именуемая константа;
//-элементы массива псевдослучайные числа, сгенерированные на интервале[a, b] где a и b вводятся с клавиатуры
//-все входные данные и также элементы массива выводятся на экран
//
//В одномерном массиве, состоящем из n целых элементов, вычислить:
//a) сумму элементов массива с нечетными номерами;//
//b) сумму элементов массива, расположенных между первым и последним отрицательными элементами.

//Develop a program, observing the following requirements :
//-use static arrays;
//-number n(the number of elements in the array) named constant;
//-elements of the array are pseudo - random numbers generated on the interval[a, b] where a and b are entered from the keyboard
//-all input data and also array elements are displayed
//
//In a one - dimensional array of n integer elements, calculate:
//a) the sum of the array elements with odd numbers;
//b) the sum of the array elements located between the firstand last negative elements.

#include <iostream>
#include <ctime>
using namespace std;


int main()
{
    const int n = 10;
    int Array[n];
    int a, b, m, l, j, sum_1, sum_2, first = 0, last = 0; //Объявляем константу размера массива, массив и переменные

    sum_1 = 0;
    sum_2 = 0; //Обнуляем сумму

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
        Array[i] = rand() % m + a;
    }; //Заполняем массив случайными числами из промежутка

    cout << "\nYou array:\n";

    for (int i = 0; i < n; i++) {
        cout << Array[i] << " ";
    }; //Выводим массив

    cout << "\n";

    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            sum_1 = sum_1 + Array[i];
        } //Ищем элементы с непарными номерами и считаем их сумму
    }
    cout << "Summa of elements with odd numbers- " << sum_1 << "\n";; //Выводим сумму непарных

    for (l = 0; l < n; l++)
    {
        if (Array[l] < 0)
        {
            first = l;
            break;
        }
    }
    for (j = n - 1; j > 0; j--)
    {
        if (Array[j] < 0)
        {
            last = j;
            break;
        }
    } //Выполняем поиск первого и последнего отрицательных элементов массива. Как только такой найден, цикл прерывается

    for (int z = first; z <= last; z++) {
        sum_2 = sum_2 + Array[z];
    } //Считаем сумму между первым и последним отрицательными элементами

    cout << "Summa of elements between first ans last negative - " << sum_2; //Выводим сумму

    return 0;

}
