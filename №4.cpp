#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int N, sum = 0;

    cout << "Введите натуральное число N: ";
    cin >> N;

    // перебираем все правильные делители (все числа от 1 до N-1)
    for (int i = 1; i < N; i++)
    {
        if (N % i == 0)      // если i делит N без остатка
            sum = sum + i;   // добавляем его к сумме
    }

    cout << "Сумма правильных делителей = " << sum << endl;

    if (sum == N)
        cout << "Число " << N << " является совершенным" << endl;
    else
        cout << "Число " << N << " не является совершенным" << endl;

    return 0;
}
