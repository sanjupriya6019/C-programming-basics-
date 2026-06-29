
#include<stdio.h>
#include<string.h>
int main(){
    char str [100];
    printf("enter a string:");
    scanf("%s",str);
    char temp;
    char *start = str;
    char *end = str + strlen(str) - 1;
    while(start < end){
        temp=*start;
        *start=*end;
        *end = temp;
        start ++;
        end --;
    }
printf("Reverse string is: %s \n",str);
    return 0;
}
