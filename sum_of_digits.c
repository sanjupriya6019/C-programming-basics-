#include<stdio.h>
int main(){
    int num, sum = 0,remainder;
    printf("enter a number: ");
    scanf("%d",&num);
    while(num != 0){
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    printf("sum of digits: %d", sum);
    return 0;
}