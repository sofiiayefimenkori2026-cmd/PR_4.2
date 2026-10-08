#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x, xp, xk, dx, part2, y;

    // Введення початкового значення, кінцевого та кроку
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << fixed;
    cout << "-------------------------" << endl;
    cout << "|   x   |      y        |" << endl;
    cout << "-------------------------" << endl;

    x = xp;
    while (x <= xk) {
        double base = 2.0 + 6.0 * x;

        if (x <= 0) {
            part2 = log(cos(x)) + pow(x, 5);
        }
        else if (x > 0 && x <= 3) {
            double argument = (1.0 + log(x)) / 3.0;
            part2 = 1.0 / tan(argument);
        }
        else {
            part2 = 12.0 * x - pow(x, 8);
        }

        // Загальний результат
        y = base + part2;
        // Виведення рядка таблиці з результатами
        cout << "| " << setw(5) << setprecision(2) << x
            << " | " << setw(13) << setprecision(3) << y << " |" << endl;
        x += dx;
    }

    cout << "-------------------------" << endl;

    return 0;
}