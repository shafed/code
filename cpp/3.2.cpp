#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {

  cout << "КВБО-11-25 Шапаренко Фёдор Александрович" << endl;
  cout << "Практическое задание №2" << endl;
  cout
      << R"(Условие: Вывести на экран только числа из созданного Вами на диске текстового файла, содержащего буквы и числа)"
      << endl;

  ifstream fin("digit.txt");
  string line, n = "";
  while (getline(fin, line)) {
    for (int i = 0; i < line.length(); i++) {
      if (isdigit(line[i]))
        n += line[i];
      else {
        if (n != "") {
          if (n[0] != '0')
            cout << n << " ";
          else
            cout << n.substr(1) << " ";
          n = "";
        }
      }
    }
  }
  if (n != "")
    cout << n;
  return 0;
}
