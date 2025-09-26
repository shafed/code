#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {

  cout << "КВБО-11-25 Шапаренко Фёдор Александрович" << endl;
  cout << "Практическое задание №2" << endl;
  cout
      << R"(Условие: Создать на диске текстовый файл и скопировать его на экран.)"
      << endl;

  ifstream fin("file.txt");
  string line;
  while (getline(fin, line)) {
    cout << line << endl;
  }
  return 0;
}
