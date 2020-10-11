//Declare contoh salah
#include <iostream>
using namespace std;

int main()
{
int bulan, tanggal;

//inisialisasi
  cout << " Please input your date followed by the month (ex : 26 12): "<< endl;
  cin >> bulan >> tanggal ; //bisa digabung

//Process
  if ( bulan==1&&tanggal<=19 );
  cout << " Kamu adalah Capricorn ";
    else {
  cout << " Kamu adalah Aquarius ";
}
else if ( bulan==2&&tanggal<=19 )
cout << " Kamu adalah Aquarius ";
  else {
cout << " Kamu adalah Pisces " << '\n';
}
else if ( bulan==3&&tanggal<=20 )
cout << " Kamu adalah Pisces ";
  else {
cout << " Kamu adalah Aries " << '\n';
}
else if ( bulan==4&&tanggal<=19 )
cout << " Kamu adalah Aries ";
  else {
cout << " Kamu adalah Taurus " << '\n';
}
  return 0;
}
