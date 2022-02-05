#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int add(int n);
// menginisialisasikan fungsi rekursif

int main() {
  int n;

  cout << "masukan angka\n";
  cin >> n;

  cout << "Sum =  " << add(n);

  return 0;
}

int add(int n) {
  if (n != 0) return n + add(n - 1);
  // terjadi perulangan, apabila n = 4 maka, 4 menjadi 3, 3 menjadi 2, 2 menjadi
  // 1, 1 menjadi 0, dan ketika sudah mencapai 0. terjadi penambahan 4 + 3 + 2
  // +1 menjadi 10.
  return 0;
}