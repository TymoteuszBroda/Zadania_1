#include<stdlib.h>
#include <stdio.h>
int createArray(int size)
{
    int array[size];
    return array[size];
}

int main(int argc, char const *argv[])
{
    printf("\nPodaj swoją liczbę: ");
    int number;
    scanf("%i", &number);
    printf("%d",number);
    int array = createArray(number);
    for (int i = 0; i<number; i++)
    {

    }
}
