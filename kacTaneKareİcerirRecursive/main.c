#include <stdio.h>
#include <stdlib.h>

//kullanicinin boyutunu girdigi kare grafikte kac tane(n*n) kare icerir
//ornek (2*2) boyutlu bir karede=4 tane(1*1)lik kare , 1tane de (2*2)lik kareden toplam 5 kare icerir


int main()
{
    printf("Karenin Boyutunu Giriniz = ");
    int boyut;
    scanf("%d",&boyut);
    printf("%d tane (n*n) boyutunda kare icerir.",recKare(boyut));
    return 0;
}

int recKare(int x){
    if(x==1){
        return 1;
    }
    return (x*x) + recKare(x-1);
}
