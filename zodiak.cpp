//Declare
#include <iostream>
using namespace std;

int main()
{
int bulan, tanggal;

//inisialisasi
  cout << " Please input your month followed by the date (ex : 12 03): "<< endl;
  cin >> bulan >> tanggal ; //bisa digabung

//Process
//else digunakan saat pilihan atau syarat terakhir yang akan terpenuhi jadi gapake kondisi lagi
// itu bisa dibuat else if tp pake else if (tanggal>= 20 && tanggal <= 31)
if (bulan == 1){
  if (tanggal>=1 && tanggal <= 19)
  cout<<"Capricorn";
  else
  cout<<"Aquarius";
}
else if (bulan == 2){
  if (tanggal>=1 && tanggal <= 18)
  cout<<"Aquarius";
  else
  cout<<"Pisces";
}
else if (bulan == 3){
  if (tanggal>=1 && tanggal <= 20)
  cout<<"Pisces";
  else
  cout<<"Aries";
}
else if (bulan == 4){
  if (tanggal>=1 && tanggal <= 19)
  cout<<"Aries";
  else
  cout<<"Taurus";
}
else if (bulan == 5){
  if (tanggal>=1 && tanggal <= 20)
  cout<<"Tauruss";
  else
  cout<<"Gemini";
}
else if (bulan == 6){
  if (tanggal>=1 && tanggal <= 20)
  cout<<"Gemini";
  else
  cout<<"Cancer";
}
else if (bulan == 7){
  if (tanggal>=1 && tanggal <= 22)
  cout<<"Cancer";
  else
  cout<<"Leo";
}
else if (bulan == 8){
  if (tanggal>=1 && tanggal <= 22)
  cout<<"Leo";
  else
  cout<<"Virgo";
}
else if (bulan == 9){
  if (tanggal>=1 && tanggal <= 22)
  cout<<"Virgo";
  else
  cout<<"Libra";
}
else if (bulan == 10){
  if (tanggal>=1 && tanggal <= 22)
  cout<<"Libra";
  else
  cout<<"Scorpio";
}
else if (bulan == 11){
  if (tanggal>=1 && tanggal <= 21)
  cout<<"Scorpio";
  else
  cout<<"Saggitarius";
}
else if (bulan == 12){
  if (tanggal>=1 && tanggal <= 21)
  cout<<"Saggitarius";
  else
  cout<<"Capricorn";
}
  return 0;
}
