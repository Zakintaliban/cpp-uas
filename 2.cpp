#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
  // 2d array
  int num[3][5] = {{1, 0, 2, 0, 3}, {4, 0, 5, 0, 6}, {7, 0, 8, 0, 9}};

  int ROWS = 3, COLS = 5, i, j;
  // menginisialisasikan pointer
  int *p = &num[0][0];
  // looping pertama yaitu 3/ROWS
  for (i = 0; i < ROWS; i++) {
    cout << endl << 	"----------------------------------------------------------------------------------" << endl;
    // looping kedua yaitu 5/COLS
    for (j = 0; j < COLS; j++) {
      cout << "| ";
      // membuat angka hilang
      if (*(p + i * COLS + j) == 0) {
        cout << "\t"
             << " "
             << "\t";
      } else {
        // untuk memunculkan angka dengan pointer
        cout << "\t" << (*(p + i * COLS + j)) << "\t";
      }
    }
    cout << " |";
  }
  cout << endl << 	"----------------------------------------------------------------------------------";
  getch();
  return 0;
}