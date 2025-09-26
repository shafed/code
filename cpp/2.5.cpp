#include <cmath>
#include <iostream>
using namespace std;

int main() {

  cout << "КВБО-11-25 Шапаренко Фёдор Александрович" << endl;
  cout << "Практическое задание №2" << endl;
  cout
      << R"(Условие: Месячная выплата m по займу S рублей на n лет под процент p вычисляется по формуле:
 m = (Sr * (1+r)^n) / (12 * ((1+r)^n - 1)), где r = p/100
 Дано: S, p, n. Найти: m.)"
      << endl;

  float m, s, n, p, r;
  cout << "Введите S, p, n: ";
  cin >> s >> p >> n;
  if (s <= 0 || p < 0 || n < 0)
    cout << "Введены неверные значения";
  else if (n == 0)
    cout << s;
  else {
    r = p / 100;
    if (12 * (pow(1 + r, n) - 1) == 0)
      cout << s / (12 * n);
    else {
      m = (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
      cout << m;
    }
  }
  return 0;
}
