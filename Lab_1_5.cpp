//Разработать программу, соблюдая следующие требования :
//-объявить статический массив из 100 элементов(так называемый "псевдо динамический" массив)
//-ввести с клавиатуры число n(реальное количество элементов массива)
//-элементы массива - псевдослучайные числа, сгенерированные на интервале[a, b], где a и bвводяться с клавиатуры
//-все входные данные и также элементы массива исходного массива и массива, полученного в результате изменений, выводятся на экран.
//
//Сформировать одномерный массив целых чисел a[], используя датчик случайных чисел.
//Вывести полученный массив. Удалить элементы, индексы которых кратны 3.
//Добавить после каждого отрицательного элемента массива элемент со значением | a[i - 1] 1 |.
//Вывести полученный массив.

//Develop a program, observing the following requirements :
//-declare a static array of 100 elements(the so - called "pseudo-dynamic" array)
//-enter the number n from the keyboard(the real number of array elements)
//-array elements - pseudo - random numbers generated on the interval[a, b], where aand b are entered from the keyboard
//-all input dataand also the elements of the array of the original arrayand the array obtained as a result of changes are displayed on the screen.
//
//Form a one - dimensional array of integers a[] using the random number generator.
//Print the resulting array. Remove elements, indices of which are multiples of 3.
//Add after each negative array element an element with the value | a[i - 1] 1 |. Print the resulting array.

#include<iostream>
#include <ctime>
using namespace std;
int main()
{
    const int H = 100;
    int A[H];
    int a, b, h, n;

    cout << "Load n \n";
    cin >> n;
    if ((n <= 0) || (n >= 100)) {

        cout << "Error n value!";

    }

    else {

        cout << "Load a and b\n";
        cout << "a = ";
        cin >> a;
        cout << "\n";
        cout << "b = ";
        cin >> b;
        cout << "\n"; //Вводим границы промежутка

        srand(time(0));

        h = (b - a) + 1;

        for (int i = 0; i < n; i++) {
            A[i] = rand() % h + a;
        }; //Заполняем массив случайными числами 

        for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
        }; //Выводим массив

        cout << "\n";

        int c = 1, j, i;
        for (i = 0; i < n; i++)
            if ((i + c) % 3 == 0)
            {
                for (int j = i; j < n - 1; j++)
                    A[j] = A[j + 1];
                n--;
                c++;
            } //Удаляем необходимые элементы методом сдвига 

        for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
        }; //Выводим массив

        cout << "\n";

        for (i = n - 1; i >= 0; --i) {
            if (A[i] < 0) {
                ++n;
                for (j = n; j > i; --j) A[j] = A[j - 1];
                A[j + 1] = abs(A[j - 1] + 1);
            }
        } //Добавляем после каждого отрицательного элемента элемент со значение abs(A[j-1] + 1) 



        for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
        }; //Выводим массив
    }
    return 0;
}


