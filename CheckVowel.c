/*
Input : Hello World
Output : String contains vowel

Input : xyz
Output : String does not contains vowel
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowel(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    { 
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            iCnt++;
        }
        str++;
    }
    if(iCnt > 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckVowel(Arr);
    if(bRet == TRUE)
    {
        printf("String contains Vowel\n");
    }
    else
    {
        printf("String does not contains Vowel\n");
    }

    return 0;
}