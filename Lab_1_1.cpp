//Создать массив из 10 - ти цифр - квадратов 1 ^ 2, 2 ^ 2, 3 ^ 2 ..Вывести массив на
//экран в одну строку.Вывести на экран только элементы, которые представлены парными
//числами.

//Create an array of 10 digit - squares 1 ^ 2, 2 ^ 2, 3 ^ 2 ..Output the array to
//screen in one line.Display only elements that are paired numbers.

#include <iostream>
using namespace std;


int main()
{
    int Array[10]; //Объявляем массив

    for (int i = 1; i <= 10; i++) {
        Array[i] = i * i;
        cout << Array[i] << " "; //Заполняем и выводим массив
    };
    cout << "\nCout pair number\n";

    for (int i = 1; i <= 10; i++) {
        if (Array[i] % 2 == 0) { //Ищем элементы, которые поданы парными числами
            cout << Array[i] << " "; //Выводим их
        }

    }

    return 0;

}
