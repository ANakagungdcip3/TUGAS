#include <iostream>
using namespace std;

int main ()
{
//Declaration
int tahun ;

//initialization
cout << " Please input years number ";
cin >> tahun;

//process
if ( tahun%4 == 0 && tahun%100!=0)
  cout << " Merupakan tahun kabisat ";
else
  cout <<" Bukan tahun kabisat ";

return 0;
}
