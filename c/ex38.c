//Escreve o vetor de números digitados
#include<stdio.h>
int main()
{
    int n = 0;
    scanf(" %d", &n);
    int vet[n], i = 0;
    for(i = 0; i < n; i++)
    {
        scanf(" %d", &vet[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }
}