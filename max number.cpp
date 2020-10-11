#include <iostream>
using namespace std;

int main ()
{
// Declaration
float a,b,c ;

// initialization
cout <<" please input first number ";
cin >> a;
cout <<" please input second number";
cin >> b;
cout <<" please input third number";
cin >> c;

//process
if(a>b){
  cout<< a <<" Adalah Bilangan Terbesar";
  cout<<endl;
 }else if(b>c){
  cout<< b <<" Adalah Bilangan Terbesar";
  cout<<endl;
 }else{
  cout<< c <<" Adalah Bilangan Terbesar";
  cout<<endl;
 }
 return 0;


}
