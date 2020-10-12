
#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Masukkan jumlah maximum"<<endl;
    cin>>n;

for(i=0;i<=n;i++){
    cout<<"\t"<<i<<"   ";
}
cout<<"\n";
    for(i=0; i<=n; i++){
        cout<<i<<"-"<<"";
      for(j=0; j<=n; j++){
        cout<<"\t"<<i*j;
   }
   cout<<"\n";
   }
    return 0;
}
