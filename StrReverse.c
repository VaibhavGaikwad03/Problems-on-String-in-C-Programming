/*
Input : Hello World
Output : dlroW olleH
*/

#include<stdio.h>

void ReverseStr(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    { 
        end++;
    }
    end--;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
    
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    ReverseStr(Arr);

    printf("Reverse string is : %s\n",Arr);

    return 0;
}