//Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter The String\n");
    gets(str);
    printf("%s",strrev(str));
}