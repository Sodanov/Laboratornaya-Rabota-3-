#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    double R = 3;   // график построен для R = 3
    double xn, xk, dx, x, y;

    cout << "Введите xнач, xкон и шаг dx: ";
    cin >> xn >> xk >> dx;

    cout << setw(8) << "x" << setw(12) << "y" << endl;

    // 0.0000001 добавлен, чтобы не потерять последнюю точку из-за погрешности
    for (x = xn; x <= xk + 0.0000001; x = x + dx)
    {
        if (x <= 0)
        {
            // прямая через точки (-6; 0) и (0; -R)
            y = R * (-6 - x) / 6;
        }
        else if (x <= 3)
        {
            // нижняя четверть окружности с центром (0; 0)
            y = 0 - sqrt(pow(R, 2) - pow(x, 2));
        }
        else if (x <= 6)
        {
            // верхняя четверть окружности с центром (6; 0)
            y = sqrt(pow(R, 2) - pow(x - 6, 2));
        }
        else
        {
            // луч вдоль оси OX
            y = 0;
        }

        cout << setw(8) << x << setw(12) << y << endl;
    }

    return 0;
}
