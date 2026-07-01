#include <stdio.h>
#include <string.h>
void reverse(char *start,char *end){
    if(start>=end) return;
    char temp=*start;
    *start=*end;
    *end = temp;
    reverse (start + 1,end -1);
    }
    int main(){
        char str[100];
        printf("Enter a string: ");
        scanf("%s",str);
        reverse(str, str+ strlen(str) -1);
        printf("Reversed string: %s\n",str);
        return 0;
    }