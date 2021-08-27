#include <stdio.h>
int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double A,B,MEDIA;
     while(scanf("%lf%lf",&A,&B)==2)
     {
         MEDIA = ((A*3.5) + (B*7.5)) / (3.5+7.5);
         printf("MEDIA = %.5lf\n",MEDIA);
     }

    return 0;
}


