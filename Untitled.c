#include <stdio.h>
int main ()

{
   int sentinel=-1;
   int nilai,total,counter;
   float rerata;
   total=0;
   counter=0;

   printf("masukkan nilai, masukkan -1 untuk mengakhiri: ");
   scanf("%d", &nilai);

   while (nilai != sentinel) {
        total = total+nilai;
        counter = counter+1;
   printf("masukkan nilai, masukkan -1 untuk mengakhiri: ");
   scanf("%d", &nilai);
}
  if(counter != 0){
      rerata = total/counter;
      printf("rata - ratanya adalah %.2f\n", rerata);
  }
  else{
    printf("tidak ada nilai dimasukkan\n");
  }
  return 0;
}
