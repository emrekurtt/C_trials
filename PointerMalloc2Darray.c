#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main()
{
int seri[3][3] = { 5,5,5,7,7,7,8,8,8};
int digerseri[9];
int *toplam = &digerseri;
static int p = 0;
int boyut = 9;
int *ptr = (int*) malloc(boyut*sizeof(int));
int top = 0;
float ortalama = 0;

for(int i = 0;i<3;i++){

        for(int j = 0;j<3;j++){
            *ptr = seri[i][j];
            ptr++;
}}

ptr = ptr-9;
for(int k = 0; k<9;k++){

    printf("%d \n",*(ptr+k));
    top = top + *(ptr+k);
}
ortalama = ((float)top/(float)boyut);
    printf("%f \n", ortalama);
free(*ptr);

getchar();

}
