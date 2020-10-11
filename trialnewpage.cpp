#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
        cout<< "masukkan angka a,b,c dengan syarat c<a<b = ";
        cin >> A >> B >> C;
        cout << "maka a: " <<A<< " b: "<<B<<" C :"<<C<<endl;

        if (A >= B)
    cout<< " A harus lebih kecil dari B";
    if (A < B) {
        if (A % C == 0) cout << A << " ";
        A++;
    } cout<<A << "adalah bilangan pada interval A - B yang habis dibagi dengan C"<< endl;

    return 0;

}
