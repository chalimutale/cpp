#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, r1, x2, y2, r2;

    cout << "Введите координаты центра первой окружности (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Введите радиус первой окружности (r1): ";
    cin >> r1;

    cout << "Введите координаты центра второй окружности (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Введите радиус второй окружности (r2): ";
    cin >> r2;

    // Расстояние между центрами окружностей
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (distance < r1 + r2) {
        cout << "Окружности пересекаются." << endl;
    } else if (distance > r1 + r2) {
        cout << "Окружности не пересекаются." << endl;
    } else if (distance == r1 + r2) {
        cout << "Окружности касаются внешним образом." << endl;
    } else {
        cout << "Окружности касаются внутренним образом." << endl;
    }

    return 0;
}