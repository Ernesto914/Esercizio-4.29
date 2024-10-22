#include <stdio.h>

int main(void)
{
    int num1, num2, tot=0;

    printf("Inserisci il primo numero da moltiplicare: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero da moltiplicare: ");
    scanf("%d", &num2);

    for (int i = 1; i <= num2; i++)
    {
        tot += num1;
    }

    printf("%d * %d = %d", num1, num2, tot);
}
