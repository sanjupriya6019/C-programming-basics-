#include<stdio.h>
void reverse()
{
    char ch;
    scanf("%d",&ch);
    if (ch !='n')
    {
        reverse();
        printf("%c",ch);
    }
    }
    int main(){
        printf("Enter a string:");
        reverse();
        return 0;
    }
