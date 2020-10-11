#include <iostream>
using namespace std;

int main ()
{
int bulan;

cout<< " Masukkan angka bulan 1-12 : ";
cin>> bulan;

switch (bulan) {
  case 1: case 3: case 5: case 7:case 8:case 10:case 12: cout<< " Jumlah hari adalah 31";
    break;
  case 2: cout<< "jika tahun kabisat maka 29, jika bukan maka 28";
    break;
  case 4:case 6:case 9:case 11: cout<< " Jumlah hari adalah 30";
    break;
}

return 0;


}
