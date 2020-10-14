#include <iostream>
using namespace std;
int main()
{
int pem, ro, gra, man;
pem=0;
 for (pem = 1; pem<=3; pem ++)
  for (ro = 1; ro<= pem; ro++)
   for (gra = pem; gra>= ro; gra--)
 man = man + gra;
if(pem > ro && gra > man){
cout<<man<<" "<<gra<<" "<<ro<<" "<<pem;
}
else
cout<<pem<<" "<<ro<<" "<<gra<<" "<<man;
return 0;
}
