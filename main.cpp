#include <iostream>
#include "stack.h"

using namespace std;

int main(){
 int pilihan;
 inisialisasi();
 do {
    tampilData();
  cout << "\n1. Masukkan Data\n"
        <<"2. Hapus Data\n"
        <<"3. Keluar\n"
        <<"Masukkan Pilihan: ";
  cin >> pilihan;
  switch (pilihan)
  {
  case 1:
   inputData();
   break;
  case 2:
   hapusData();
   break;
  default:
      cout << "Pilihan tidak tersedia" << endl;
   break;
  }
 } while (pilihan!=3); 
}
