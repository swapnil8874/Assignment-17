//Write a program to count vowels in a given string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,count=0;
    printf("Enter The String\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        {
           count++;
        }
    }
    printf("The Total Number of Vowels are %d",count);

}