#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main() {

  cout << "КВБО-11-25 Шапаренко Фёдор Александрович" << endl;
  cout << "Практическое задание №2" << endl;
  cout
      << R"(Условие: Задать строку из 30 букв и расставить их в алфавитном порядке)"
      << endl;

  locale loc("ru_RU.UTF-8");
  locale::global(loc);
  cin.imbue(locale());
  cout.imbue(locale());
  ifstream fin("30.txt");
  fin.imbue(loc);
  string s;
  getline(fin, s);

  for (char c : s)

    if (!(((c > 64) && (c <= 90)) || ((c > 96) && (c <= 122)) || (c < 0))) {
      cout << "В файле есть не буква";
      return 0;
    }

  if (s.length() > 30) {
    cout << "Файл состоит из больше чем 30 букв";
  } else {
    sort(s.begin(), s.end());
    cout << s;
  }

  return 0;
}
