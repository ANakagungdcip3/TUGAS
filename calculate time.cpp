#include <iostream>
using namespace std;

int main ()
{
//Declare
   double s,v,t;

// initialization
std::cout << " masukkan s/jarak ";
std::cin >> s;
std::cout << " masukkan v/kecepatan " << '\n';
std::cin >> v;

//process
t = s/v;

//Finalization
std::cout << "Benda tersebut berjalan dengan lama " << t << " sekon "<< endl;
std::cout << " Terima kasih sudah mennggunakan program ini " << '\n';

return 0;
}
