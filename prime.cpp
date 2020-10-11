#include <iostream>
using namespace std;

int main() {
    int i, n;
    bool bilanganprima = true;

    cout << "Masukkan bilangan prima positif: ";
    cin >> n;

    //karena 0 dan 1 bukan bilangan prima, maka
    if (n == 0 || n == 1) {
        bilanganprima = false;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                bilanganprima = false;
                break;
    }
    }
    }
    if (bilanganprima)
        cout << n << " Merupakan Bilangan Prima ";
    else
        cout << n << " Bukan bilangan prima ";

    return 0;
}
