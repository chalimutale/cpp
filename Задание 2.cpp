// Chali Mutale, NKAbd-05-24, 23.09.24, 23:46
// QUESTION: Даны координаты центра и радиус двух окружностей: 01 (х1, У 1, П1) и О2 (х2, У2,72). Проверить, пересекаются ли они.
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

/*
The program compares the calculated distance between the centers with the sum and difference of the radii:
1. If the distance is less than the sum of the radii, the circles intersect.
2. If the distance is greater than the sum of the radii, the circles do not intersect.
3. If the distance is equal to the sum of the radii, the circles are externally tangent.
4. If the distance is equal to the difference of the radii, the circles are internally tangent. 
*/
