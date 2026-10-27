#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int N;
    double x, y, xn, yn, s;

    cout << "Введите N (N > 2): ";
    cin >> N;

    x = 1;   // x1 = 1
    y = 1;   // y1 = 1
    s = 0;   // сумма пока равна нулю

    for (int i = 1; i <= N; i++)
    {
        // прибавляем i-е слагаемое суммы
        s = s + (x + i) / (y + i + 1);
        xn = 3 * x + 2 * y;
        yn = 2 * x + y;
        x = xn;
        y = yn;
    }

    cout << "Сумма = " << s << endl;

    return 0;
}
