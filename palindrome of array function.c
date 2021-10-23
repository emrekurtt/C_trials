#include <stdio.h>


int main(){

int arr[10] = {1,1,5,5,1,1,1,1,1,1};
int address = &arr;
int compare(int address, int boyut)
{
    int top = 0;
    for( int i = 0, j = boyut-1; i<j ; ++i,--j)
    {
    if (arr[i] == arr[j]) { top = top+0; printf(" ==  arr[%d] = %d , arr[%d] = %d \n",i,arr[i],j,arr[j]); }
    else{top++; printf(" !== arr[%d] = %d , arr[%d] = %d \n",i,arr[i],j,arr[j]);}
}
return top;
}

int sonuc = compare(*arr,10);
printf(" sonuc == %d", sonuc);
}
