#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

// membuat class video card dengan beberapa atribut
class videoCard {  // nama class
 public:           // memberi spesifik detail
  string merk;     // atribut string
  string model;    // atribut string
  int vram;        // atribut vram
  // dalam membuat function, terdapat dua cara, bisa itu dari dalam class atau
  // diluar class ini adalah contoh function didalam class 
  // int clockSpeed(int maxclockSpeed) {
  //   return maxclockSpeed;
  // }
  // ini adalah contoh function diluar class, dimana kita menginisialisasikan
  // nama function dan parameter
  int clockSpeed(int maxclockSpeed);
};
// disini kita baru melakukan isi functionnya
int videoCard::clockSpeed(int maxclockSpeed) { return maxclockSpeed; }

int main() {
  // membuat object videoCard
  videoCard videoCardObj1;
  videoCardObj1.merk = "Nvidia";
  videoCardObj1.model = "RTX 3090 Ti";
  videoCardObj1.vram = 24;

  // membuat object lain videoCard
  videoCard videoCardObj2;
  videoCardObj2.merk = "AMD";
  videoCardObj2.model = "Radeon rx 6900 xt";
  videoCardObj2.vram = 16;

  // print value dari object diatas
  cout << videoCardObj1.merk << " " << videoCardObj1.model << " "
       << videoCardObj1.vram << "Gb " << videoCardObj1.clockSpeed(19500)
       << "mhz " << endl;
  cout << videoCardObj2.merk << " " << videoCardObj2.model << " "
       << videoCardObj2.vram << "Gb " << videoCardObj2.clockSpeed(16000)
       << "mhz " << endl;
  return 0;
}