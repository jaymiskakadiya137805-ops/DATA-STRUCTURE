#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,top =-1;
    char stack[100];

    printf("Enter a string:");
    scanf("%s",str);

    for (i=0;str[i]!='\0';i++);
    {

        stack[++top]=str[i];
    }

    printf("Reversedstring:");
    while (top!=-1)
    {
        printf("%c",stack[top--]);;
    }
    return 0;
}
