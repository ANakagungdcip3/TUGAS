#include <iostream>
using namespace std;

int main()
{
//deklarasi
	int n;
	int i;
//inisialisasi
	cout << "Masukkan bilangan bulat : ";
	cin >> n;
//proses
	bool adalahPrima = true;
	for (int i=2; i<n; i++)
{	if (n%i==0)
	{	adalahPrima = false;
	}
}
	if (adalahPrima)
		cout << n << "adalah bilangan bulat prima.";
	else
		cout << n << "adalah bilangan bulat bukan prima.";
//memberhentikan program
	return 0;
}
