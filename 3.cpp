#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
  int n, sum = 0;
  cout << "masukan angka\n";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    // terjadi perulangan, apabila n = 4 maka: 1 + 2 + 3 + 4
    sum += i;
  }
  cout << "Sum = " << sum;
  getch();
  return 0;
}