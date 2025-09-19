#include <cmath>
#include <iostream>
using namespace std;

int main() {

  cout << "- КВБО-11-25 Шапаренко Фёдор Александрович" << endl;
  cout << "- Практическое задание №1" << endl;
  cout << R"(- Условие: Для любых введенных с клавиатуры a, b и c
решить уравнение вида ax^2 + bx + c = 0)"
       << "\n\n";

  float a, b, c, d;
  cout << "Введите a,b,c: ";
  cin >> a >> b >> c;
  if (a == 0) {
    if (b == 0) {
      if (c == 0)
        cout << "Бесконечно много решений";
      else
        cout << "Нет решений";
    } else
      cout << "x = " << -c / b;
  } else {
    d = b * b - 4 * a * c;
    if (d < 0)
      cout << "Нет решений";
    else if (d == 0)
      cout << "x = " << -b / (2 * a);
    else
      cout << "x1 = " << (-b + sqrt(d)) / (2 * a)
           << " x2 = " << (-b - sqrt(d)) / (2 * a);
  }
  return 0;
}
