#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {

  ifstream fin("file.txt");
  string line;
  while (getline(fin, line)) {
    cout << line << endl;
  }
  return 0;
}
