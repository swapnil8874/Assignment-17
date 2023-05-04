// C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int i,alp=0,dig=0,splchr=0;
    printf("Enter The String\n");
    fgets(str,50,stdin);
    for(i=0;str[i];i++)
    {
        if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            dig++;
        }
        else
        {
            splchr++;
        }
    }
    printf("the total number of alphabets, digits and special characters in a string is %d %d %d",alp,dig,splchr); 
}