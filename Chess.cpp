#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int jumlah,x,y,a,b;
    cin >> jumlah;
    cin >> x;
    cin >> y;
    for(int i = 0; i < jumlah; i++)
    {
        cin >> a;
        cin >> b;
        if(abs(a-x)==abs(b-y))
        {
            cout << "BISA" << endl;
        }
        else
        {
            cout << "TIDAK BISA" << endl;
        }
        
    }
    return 0;
}