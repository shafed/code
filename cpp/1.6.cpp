#include <cmath>
#include <iostream>
using namespace std;

int main() {

  cout << "- КВБО-11-25 Шапаренко Фёдор Александрович" << endl;
  cout << "- Практическое задание №1" << endl;
  cout << R"(- Условие: Вычислить объем и полную поверхность усеченного конуса)"
       << "\n\n";

  float R, r, h;
  float v, s, l, pi;
  pi = M_PI;
  cout << "Введите большой радиус (R): ";
  cin >> R;
  cout << "Введите маленький радиус (r): ";
  cin >> r;
  cout << "Введите высоту (h): ";
  cin >> h;
  if (R < 0 or r < 0 or h < 0)
    cout << "Отрицательные значения!";
  else {
    l = sqrt(h * h + (R - r) * (R - r));
    v = 1.0 / 3 * pi * h * (R * R + R * r + r * r);
    s = pi * (R * R + (R - r) * (R - r) * l + r * r);
    if (v == 0 and s == 0)
      cout << "Конуса не существует";
    else
      cout << "V = " << v << endl << "S = " << s;
  };

  return 0;
}
