#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i,j,k,satir;
    satir=5;

    for(i=1;i<=satir;i++){
            for(k=1;k<=satir-i;k++){
                printf(" ");
            }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
            printf("\n");
    }
}
