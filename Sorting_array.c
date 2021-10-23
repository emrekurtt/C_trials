#include <stdio.h>

int array[15] = {73,7,6,8,1,11,24,1,22,4,3,7,13,45,1};

void sort_array(int *address, int size){

void digerfonks(){
for(int i = 0;i<size-1;i++)
{
    if (address[i] > address[i+1]){
            int gecici_buyuk = address[i+1];
            address[i+1]  = address[i];
            address[i] = gecici_buyuk;
            }
}
}
for(int k =0;k<5;k++){
digerfonks(); //times of implementation}
}
void printle(int *adres,int boyut){
for(int i = 0; i< boyut;i++)
{

printf("%d. sayi => %d \n ",i,adres[i]);

}
}
int main(){
 printf("program basladi \n");
 printf("onceki array = \n");
 printle(array,15);
 sort_array(array,15);
 printf("sortlama yapildi \n");
 printle(array,15);

}
