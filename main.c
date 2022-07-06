#include<stdio.h>
#include<stdlib.h>
#include"gorner.h"
#include<time.h>

int main()
{
    int N;
    double result;
    double x;
    clock_t begin = clock();

    printf("The number of factors in the function :  ");
    scanf("%d", &N);
    double *mass;
    mass = (double*)malloc(sizeof(double) * N);
    printf("\n");
    printf("Type in your factors for q*x^n + ... + a*x^2 + b*x + c :  ");
    for(int i = 0; i < N; i++)
    {
        scanf("%lf", &mass[i]);
    }

    printf("Type in x =  ");
    scanf("%lf", &x);
    printf("\n");
    result = gorner_func(N, mass, x);
    printf("The result of the function for x = %.4lf is %.4lf \n", x, result);
    free(mass);
    clock_t end = clock();
    printf("DONE IN %f seconds\n", (double)(end - begin) / CLOCKS_PER_SEC);
    return 0;
}
