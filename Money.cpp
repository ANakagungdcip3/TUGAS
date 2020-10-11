#include <iostream>
using namespace std;
#define konversi 14835;

int main()
{
//declare
double rupiah,dollar;

//initialization
cout << "Masukkan nilai rupiah: ";
cin >> rupiah;

//process
dollar = rupiah/konversi;

//finalization
cout << rupiah << "rupiah equals to" << dollar << "USD";
  return 0;
}
