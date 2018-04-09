#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if (n==0){
        return 0;
    }else if (n==1){
    return 1;
    }else {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}

int main()
{
    printf("Unesite n: \n");
    int n;
    scanf("%d", &n);
    int fib_broj;
    fib_broj=fibonacci(n);
    printf("%d-ti Fibonaccijev broj je: %d", n, fib_broj);
    return 0;
}
