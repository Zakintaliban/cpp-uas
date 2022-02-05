#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
  // 2d array
  int num[3][5] = {
      {10, 90, 30, 40, 40}, 
      {11, 12, 90, 14, 15}, 
      {50, 60, 70, 80, 90}};

  int ROWS = 3, COLS = 5, i, j;
  // menginisialisasikan pointer
  int *p = &num[0][0];

  // MAX NUM
  int max;
  // looping pertama yaitu 3/ROWS
  for (i = 0; i < ROWS; i++) {
    // looping kedua yaitu 5/COLS
    for (j = 1; j < COLS; j++) {
      // melakukan perbandingan dengan satu dan lainnya
      if (*(p + i * COLS + j) > *(p + i * COLS + j - 1)) {
        max = *(p + i * COLS + j);
      }
    }
  }

  cout << "TERDAPAT NILAI MAKSIMUM " << max << endl;

  // JMLH dari MAX
  int jmlh = 0;
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      // mencari angka max yang duplikat
      if (*(p + i * COLS + j) == max) {
        jmlh++;
      }
    }
  }

  cout << "TERDAPAT NILAI MAKSIMUM " << max << " DENGAN " << jmlh << " ANGKA" << endl;

  // CHECK 50
  int search = 50;
  bool available = false;
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      // untuk meng-cek jika ada angka 50
      if (*(p + i * COLS + j) == search) {
        available = true;
      }
    }
  }
  // guna memberi info jika ada angka 50
  if (available) {
    cout << "NILAI DENGAN ANGKA " << search << " ADA" << endl;
  } else {
    cout << "NILAI DENGAN ANGKA " << search << " TIDAK ADA" << endl;
  }

  // PRINT
  for (i = 0; i < ROWS; i++) {
    cout << endl << "-------------------------------------------" << endl;
    for (j = 0; j < COLS; j++) {
      cout << "| ";
      cout << "\t" << (*(p + i * COLS + j));
    }
    cout << " |";
  }
  cout << endl << "-------------------------------------------";
  getch();
  return 0;
}