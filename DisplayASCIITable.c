#include<stdio.h>

void DisplayASCII()
{   int i = 0;

    for(i = 0; i <= 127; i++)
    {
        printf("Character : %c\n",i);
        printf("Decimal : %d\n",i);
        printf("Hexadecimal : %x\n",i);
        printf("Octal : %o\n",i);
        printf("____________________\n");

    }
}

int main()
{
    DisplayASCII();

    return 0;
}