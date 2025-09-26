#include <algorithm>
#include <cctype>
#include <codecvt>
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

  // Устанавливаем локаль для корректной работы с русскими буквами
  locale loc("ru_RU.UTF-8");
  locale::global(loc);

  // Открываем файл с UTF-8 кодировкой
  wifstream fin("30.txt");
  fin.imbue(loc);

  if (!fin.is_open()) {
    cout << "Не удалось открыть файл" << endl;
    return 1;
  }

  wstring ws;
  getline(fin, ws);
  fin.close();

  // Проверяем каждый символ
  for (size_t i = 0; i < ws.length(); ++i) {
    wchar_t c = ws[i];
    bool isValid = (c >= L'A' && c <= L'Z') || (c >= L'a' && c <= L'z') ||
                   (c >= L'А' && c <= L'Я') || (c >= L'а' && c <= L'я') ||
                   c == L'Ё' || c == L'ё';

    if (!isValid) {
      if (i < 30) {
        wcout << L"В файле есть не буква" << endl;
        return 0;
      } else {
        wcout << L"После 30-й буквы есть посторонний символ" << endl;
        return 0;
      }
    }
  }

  // Проверяем длину
  if (ws.length() > 30) {
    wcout << L"Файл состоит из больше чем 30 букв" << endl;
    return 0;
  }

  // Сортируем
  sort(ws.begin(), ws.end());

  // Конвертируем обратно в UTF-8 для вывода
  wstring_convert<codecvt_utf8<wchar_t>> converter;
  string result = converter.to_bytes(ws);
  cout << result << endl;

  return 0;
}
