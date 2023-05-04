//Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int si,i,j,temp;
    printf("Enter Any String\n");
    gets(str);
    si=strlen(str);
    for(i=1;i<si;i++)
    {
        for(j=0;j<si-1;j++)
        {
        str[j]>str[j+1];
        temp=str[j];
        str[j]=str[j+1];
        str[j+1]=temp;
        }  
    }
    printf("string array in ascending order %s",str);
}