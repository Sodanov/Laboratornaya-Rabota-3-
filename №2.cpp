#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int N;
    double x, y, R;

    cout << "Введите R: ";
    cin >> R;
    cout << "Введите количество точек N: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cout << "Точка " << i << ", введите x и y: ";
        cin >> x >> y;

        // верхний полукруг: y >= 0 и x^2 + y^2 <= R^2
        bool polukrug = (y >= 0) && (pow(x, 2) + pow(y, 2) <= pow(R, 2));

        // треугольник с вершинами (0;0), (-R;-R), (0;-R)
        bool treugolnik = (x <= 0) && (y >= -R) && (y <= x);

        if (polukrug || treugolnik)
            cout << "Точка " << i << " принадлежит области" << endl;
        else
            cout << "Точка " << i << " не принадлежит области" << endl;
    }

    return 0;
}
