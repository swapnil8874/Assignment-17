//Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int i;
    printf("Enter The String1\n");
    gets(str1);
    printf("\n String 1 is : %s\n",str1);
    strcpy(str2,str1);
    printf("\nString 2 is %s",str2);
}