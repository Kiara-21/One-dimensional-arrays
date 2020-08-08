//Разработать программу, соблюдая следующие требования :
//-использовать статический массив;
//-число n(количество элементов массива > 20та <= 50) - именована константа;
//-элементы массива - псевдослучайные числа, сгенерированные на интервале[a, b], где a и b вводятся с клавиатуры
//-выполнить проверку на корректность введенных данных;
//-для составления одной части массива использовать метод пузырьки, для второй части - метод выбора.
//-все входные данные и также элементы массива исходного массива и массива, полученного в результате изменений, выводятся на экран.
//
//Превратить данный числовой массив В(N), упорядочив его по убыванию так, 
//чтобы M его последних элементов остались неупорядоченными. (Известно, что M < N).

//Develop a program, observing the following requirements :
//-use a static array;
//-number n(number of array elements > 20t <= 50) - the constant is named;
//-array elements - pseudo - random numbers generated on the interval[a, b], where aand b are entered from the keyboard
//-check the correctness of the entered data;
//-to compose one part of the array, use the bubbles method, for the second part, use the selection method.
//-all input dataand also the elements of the array of the original arrayand the array obtained as a result of changes are displayed on the screen.
//
//Convert the given numeric array into B(N), ordering it in descending order so that the M 
//of its last elements remain unordered. (It is known that M < N).

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    const int L = 100;
    int A[L];
    int a, b, l, v, n, M;

    cout << "Load n = [20..50] \n";
    cin >> n;
    if ((n > 20) && (n <= 50)) {
        cout << "Load M, M < N";
        cin >> M;
        if (M < n) {
            cout << "Load a and b\n";
            cout << "a = ";
            cin >> a;
            cout << "\n";
            cout << "b = ";
            cin >> b;
            cout << "\n"; //Вводим границы промежутка

            srand(time(0));

            l = (b - a) + 1;

            for (int i = 0; i < n; i++) {
                A[i] = rand() % l + a;
            }; //Заполняем массив случайными числами из промежутка

            for (int i = 0; i < n; i++) {
                cout << A[i] << " ";
            }; //Выводим массив

            cout << "\n";

            for (int i = 0; i < n - M - 1; i++) {
                for (int j = n - M - 2; j >= i; j--) {
                    if (A[j] < A[j + 1]) {
                        v = A[j];
                        A[j] = A[j + 1];
                        A[j + 1] = v;
                    }
                }
            }//Сортируем массив по убыванию


            for (int i = 0; i < n; i++) {
                cout << A[i] << " ";
            }; //Выводим массив
        }
        else
            cout << "Limit error!";
    }
    else
        cout << "Limit error!";
    return 0;
}


