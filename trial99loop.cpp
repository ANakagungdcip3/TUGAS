#include <iostream>
using namespace std;

int main()
{
int number;
long factorial = 1;

cout<<"Enter a number to calculate the factorial: ";
cin>>number;
cout<<number<<"! = ";

while (number >= 1)
{
factorial *= number; //same with factorial = factorial * C;
}
if (number != 1) { cout<<number<<" x ";
}
else {
cout<<number<<" = ";
}
number--; // Decrease the value of number variable }
    cout<<factorial;
return 0;
}
