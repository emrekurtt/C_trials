#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){


int *mal = (int*)malloc(3*sizeof(int));

mal[0];  // üstü
mal[1];   //sayinin kendisi
mal[2];   //sonuc;
static int toplam = 1;

printf("sayiyi gir \n");
scanf("%d",&mal[1]);

printf("ussunu gir \n");
scanf("%d",&mal[0]);


for (int i = 0; i<mal[0]; i++){

    toplam = toplam * mal[1];
}

  mal[2] = toplam;
  printf("Sonuc : %d^%d =  %d \n",mal[1],mal[0],mal[2]);



free(mal);
getchar();
}
