#include<stdio.h>
#include<stdlib.h>

int main (){
    int m, n, resultado=0;
    printf("Ingrese un primer numero\n");
    scanf("%d", &m);
    printf("Ingrese un segundo numero\n");
    scanf("%d", &n);
    while (m>=1){
        if (m%2!=0){
            resultado=resultado+n;
        }
        m=m/2;
        n=n*2;
    }
    printf("El resultado es: %d\n", resultado);
    return 0;
}