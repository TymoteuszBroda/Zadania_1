#include <stdio.h>
//will read user input as number to check
int main()
{   int number=0, sum=0;
    printf("Podaj liczbe: \n");
    scanf("%d", &number);

    if (number<=0)
    {
        printf("\nSuma wynosi:%d, liczba była ujemna lub równa zeru=.", sum,"\n");
        return 0;
    }


    for (int i=1; i < number; i++)
    {
        if(i%3==0 || i%5==0)
        {
            sum += i;
        }
    }
    printf("Suma wynosi:\t %d", sum);
    return 0;
}