#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, diskriminan, real, imaginari;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    diskriminan = pow(b,2) - 4*a*c;

    if (diskriminan > 0) {
        x2 = (-b - sqrt(diskriminan)) / (2*a);
        cout << "Akar real dan berbeda." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (diskriminan == 0) {
        cout << "Akar real dan sama" << endl;
        x1 = (-b + sqrt(diskriminan)) / (2*a);
        cout << "x1, x2 =" << x1 << endl;
    }

    else {
        real = -b/(2*a);
        imaginari =sqrt(-diskriminan)/(2*a);
        cout << "Akar imaginer"  << endl;
        cout << "x1 = " << real << "+" << imaginari << "i" << endl;
        cout << "x2 = " << real << "-" << imaginari << "i" << endl;
    }

    return 0;
}
