#include <cmath>
#include <iostream>
using namespace std;

int main() {

  cout << "КВБО-11-25 Шапаренко Фёдор Александрович" << endl;
  cout << "Практическое задание №2" << endl;
  cout << R"(Условие: )" << endl;

  float n, i;
  cout << "Введите N: ";
  cin >> n;
  if (n < 1)
    for (i = 1; i <= 10; i++)
      cout << i << " ";
  else
    for (i = 0; i < 10; i++)
      cout << ceil(n) + i << " ";

  return 0;
}
