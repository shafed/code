#include <cmath>
#include <iostream>
using namespace std;

int main() {

  cout << "КВБО-11-25 Шапаренко Фёдор Александрович" << endl;
  cout << "Практическое задание №2" << endl;
  cout
      << R"(Условие: Для произвольных x и a вычислить w = a*ln|x|, если |x| < 1 и w = корень(a-x*x), если |x| >= 1)"
      << endl;

  float a, x, w;
  cout << "Введите x, a: ";
  cin >> x >> a;

  if (x == 0)
    cout << "Нет решений";
  else if (abs(x) < 1)
    cout << a * log(abs(x));
  else if (a - x * x < 0)
    cout << "Нет решений";
  else
    cout << sqrt(a - x * x);
  return 0;
}
