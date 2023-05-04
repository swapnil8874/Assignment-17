//Write a program to count the occurrence of a given character in a given string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,count=0,b;
    printf("Enter The String");
    gets(str);
    printf("Enter The character which occurance is find:\n");
    b=getchar();
    for(i=0;str[i];i++)
    {
        if(str[i]==b)
        {
            count++;
        }
    }
    printf("The Occurnce of %c is %d",b,count);



}