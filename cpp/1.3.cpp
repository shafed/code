#include <iostream>
using namespace std;

int main() {

  cout << "- КВБО-11-25 Шапаренко Фёдор Александрович" << endl;
  cout << "- Практическое задание №1" << endl;
  cout << R"(- Условие: Для любых введенных с клавиатуры b и c решить
уравнение вида bx + c = 0)"
       << "\n\n";

  float b, c;
  cout << "Введите b, c: ";
  cin >> b >> c;
  if (b == 0) {
    if (c == 0)
      cout << "Бесконечно много решений";
    else
      cout << "Нет решений";
  } else
    cout << "x = " << -c / b;

  return 0;
}
