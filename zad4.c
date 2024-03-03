#include<stdlib.h>
void fillArray(int array[], int size)
{
    for (int i = 0; i<size; i++)
    {
        array[i] = i+1;
    }
}

int main(int argc, char const *argv[])
{
    int numbers[200];
    fillArray(numbers, 200);
    for (int i = 0; i < 200; i++)
    {
        if (numbers[i] % 5 == 0 && numbers[i] % 7 == 0)
        {
            printf("FooBar\n");
        }
        else if (numbers[i] % 5 == 0)
        {
            printf("Foo\n");
        }
        else if (numbers[i] % 7 == 0)
        {
            printf("Bar\n");
        }
        else
        {
            printf("%d\n", numbers[i]); 
        }
    }
    
    return 0;
}
