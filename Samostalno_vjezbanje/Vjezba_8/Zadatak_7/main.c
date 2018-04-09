#include <stdio.h>
#include <stdlib.h>

void ZamijeniPokazivace(int* p1, int* p2){
    int pomocni;
    pomocni=*p1;
    *p1=*p2;
    *p2=pomocni;
}

int main()
{
    printf("Unesite dva broja: \n");
    int a, b;
    scanf("%d %d", &a, &b );
    printf("\nPrije zamjene: a=%d, b=%d",a, b);
    ZamijeniPokazivace(&a, &b);
    printf("\nNakon zamjene: a=%d, b=%d", a, b);
    return 0;
}
