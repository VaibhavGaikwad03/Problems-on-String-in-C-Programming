/*
Input : %
Output : It is special character

Input : d
Output : It is not a special character 
*/


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL CheckSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = CheckSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special character\n");
    }
    else
    {
        printf("It is not a special character\n");
    }

    return 0;
}