//Write a program to convert a given string into lowercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter The String\n");
    gets(str);
    printf("%s",strlwr(str));
}