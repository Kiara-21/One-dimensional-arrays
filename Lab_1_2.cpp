//Составить программу, которая вводит с клавиатуры массив чисел и выводит количество
//нулевых элементов.Если таких элементов в массиве нет, то вывести на экран
//соответствующее сообщение.

//Create a program that enters an array of numbers from the keyboardand
//displays the number of zero elements.If there are no such elements in the array,
//then display the corresponding message.

#include <iostream>
using namespace std;


int main()
{
    const int n = 10;
    double Array[n];
    int x = 0, m = 0; //Объявления массива и элементов

    cout << "Load elements\n";

    for (int i = 0; i < n; i++) {
        cin >> Array[i];
    }; //Ввод элементов массива

    cout << "You array: \n";

    for (int i = 0; i < n; i++) {
        cout << Array[i] << " ";
    } //Вывод массива
    cout << "\n";

    for (int i = 0; i < n; i++) {
        if (Array[i] == 0) {
            x = x + 1;
        }
    } //Выполняем поиск нулевых элементов и считаем их количество

    if (x != 0) {
        cout << " Number of 0 element - " << x;
    }

    else cout << "No 0 element"; //Выводим количество, либо сообщаем об отсутствии таковых

    return 0;

}
