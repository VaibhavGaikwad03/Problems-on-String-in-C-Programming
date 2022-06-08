/*
Input : Hello World
Output : 6 (8 - 2)
*/

#include<stdio.h>

int CountDiff(char *str)
{
    int iCountCap = 0;
    int iCountSmall = 0;

    while(*str != '\0')
    { 
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        str++;
    }
    return iCountSmall - iCountCap;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountDiff(Arr);
    printf("Difference between Capital and Small letters is : %d\n",iRet);

    return 0;
}