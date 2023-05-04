//Write a program in C to Find the Frequency of Characters
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,count=0,ch;
    printf("Enter Any String\n");
    gets(str);
    printf("Enter The Character Whose frequency you want to find\n");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    {
        if(ch==str[i])
        {
            count++;
        }
    }
    printf("The Frequency of Given Character is %d",count);

}