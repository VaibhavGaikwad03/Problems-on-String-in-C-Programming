/*
Input : C
Outout : Exam of Division C at 9.20am

Input : d
Outout : Exam of Division D at 10.30am
*/

#include<stdio.h>

void CheckDiv(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Exam of Division A at 7am\n");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("Exam of Division B at 8.30am\n");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("Exam of Division C at 9.20am\n");
    }
    else if(ch == 'D' || ch == 'd')
    {
        printf("Exam of Division D at 10.30am\n");
    }
    else
    {
        printf("You selected Invalid Division\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your Division : \n");
    scanf("%c",&cValue);

    CheckCapital(cValue);

    return 0;
}