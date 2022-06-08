/*
Input : Hello World
Decimal : 2
Octal : marvellous
Hexadecimal : 0
*/

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    { 
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt++;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);
    printf("Count of Capital numbers are : %d\n",iRet);

    return 0;
}