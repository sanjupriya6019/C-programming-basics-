
/* A string in C is an array of characters ending with a NULL terminator 
'\0'. 
To reverse it, you swap characters from the start and end until you meet in the middle.*/
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++){
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}