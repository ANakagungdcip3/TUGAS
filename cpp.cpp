#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>> n;
    char s1[n],s2[n];
    for (int i=0; i<n; i++)
    {
        cin>> s1[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>> s2[i];
    }
    for (int i=0; i<n*2; i++)
    {
        if (i%2== 0)
        {
            cout<< s1[i];
        }
        else
        {
            cout<< s2[n-i];
        }
    }
    return 0;
}
