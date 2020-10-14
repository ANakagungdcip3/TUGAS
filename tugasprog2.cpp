#include <iostream>
using namespace std;
int main()
{
int a,b;
 a=100,b=90;
do {
    a+=1;
    if(a-b < 0)
    {   
        b-=1;
    }
    a++;
 }while (a<b);
cout<<a<<" "<<b;
return 0;
}