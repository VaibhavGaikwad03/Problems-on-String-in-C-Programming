/*
Input : Q
Output : Q R S T U V W X Y Z

Input : m
Output : m i k j h g f e d c b a 
*/

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        while (ch != '[')
        {
            printf("%c ",ch);
            ch++;
        }
        
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        while(ch != '`')
        {
            printf("%c ",ch);
            ch--;
        }
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}