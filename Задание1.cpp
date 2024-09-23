// Chali Mutale, NKAbd-05-24, 23.09.24, 11:45
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a, b, c, d;

  cout << "Введите длины сторон трапеции (a, b, c, d): ";
  cin >> a >> b >> c >> d;

  // Проверка на существование трапеции, вписанной в окружность
  if (a + c != b + d) {
    cout << "Трапеция с такими сторонами не может быть вписана в окружность." << endl;
    return 1;
  }

  // Вычисление полупериметра трапеции
  double p = (a + b + c + d) / 2;

  // Вычисление площади трапеции по формуле Брахмагупты
  double S = sqrt((p - a) * (p - b) * (p - c) * (p - d));

  cout << "Площадь трапеции: " << S << endl;

  return 0;
}

/*
1. The code uses the condition a + c != b + d to check if the trapezoid is inscribable in a circle.
2. Brahmagupta's formula is a specific formula for calculating the area of cyclic quadrilaterals.
3. The code includes error handling to check for invalid input and provide appropriate messages.
*/
