#include <iostream>
using namespace std;

int main()
{
  //Declare
  double a;

  //initialization
  cout << "Ini adalah program untuk menentukan angka merupakan desimal atau tidak" << endl;
  cout << "Masukkan angka :";
  cin >> a;

  //process
  if( a == int (a) ) //typecasting note, contoh 12.44 akan menjadi 12 sehingga tidak sama dengan input data awal
      cout << "not decimal";
  else if (a < 1) // buat bilangan 0.9 sampai 0.001
      cout << "decimal";
  else
  {
      cout << "decimal";
  }
  return 0;
}
