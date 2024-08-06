#include <stdio.h>

void fibonacci(int n) {
        int a = 0, b = 1, c, i;
        if (n >= 1)
        printf("%d ", a);
        if (n >= 2)
        printf("%d ", b);
        for (i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
}
printf("\n");

}

unsigned long long fibonacciSum(int n) {
    unsigned long long a = 0, b = 1, c, sum = 0;
    int i;
    if (n >= 1)
    sum += a;
    if (n >= 2)
    sum += b;
    for (i = 3; i <= n; i++) {
    c = a + b; sum += c; a = b;
    b = c;
}
return sum;

}
int main() {
    int n,m;
    printf("Entrez le nombre de termes de la suite de Fibonacci que vous voulez afficher : ");
    scanf("%d", &n);
    printf("Entrez le nombre de termes de la suite de Fibonacci dont vous voulez calculer la somme : ");
    scanf("%d", &m);
    unsigned long long sum = fibonacciSum(m);

    printf("Suite de Fibonacci jusqu'au %d-ème terme :\n", n); fibonacci(n);
    printf("La somme des %d premiers termes de la suite de Fibonacci est : %llu \n", m, sum);
    return 0;

}
