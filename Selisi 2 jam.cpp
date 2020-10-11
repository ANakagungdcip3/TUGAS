#include <iostream>
using namespace std;

int main ()
{
//declare
int jam[2], menit[2], hasil1, hasil2 ;

//initialization
for (int i = 0 ; i < 2; i++)
{
  cout << " masukkan data jam  " << i+1 << " " ;
  cin >> jam[i];
  if (jam[i-1] > 23)
  {
    cout << "jam cuman ada 24" << endl;
    return 1;
  }

  cout << " masukkan data menit " << i+1 << " ";
  cin >> menit[i];

  if (menit[i-1] > 59)
  {
    cout << "salah cuk" << endl;
    return 1;
  }
}


//process
hasil1 = jam[0] - jam[1];
hasil2 = menit[0] - menit[1];

if (hasil1 <= 0) {
  hasil1 = -hasil1;
}
if (hasil2 <= 0) {
  hasil2 = -hasil2;
}
//Finalization
cout<< "Selisih waktunya adalah " << hasil1 << " jam dan "<< hasil2 << "menit" << endl;
return 0;

}
