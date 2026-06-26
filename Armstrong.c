#include<stdio.h>
int main(){
    int num,original,rem,sum=0,count;
    printf("Enetr the number:");
    scanf("%d",&num);
    for (count=0;count<20;count++)
    original=num;
    while (num !=0){
        rem=num%10;
        sum= sum+(rem * rem*rem);
        num=num/10;
    }
    if (sum == original)
    printf("%d is the an armstrong number\n",original);
    else
    printf("%d is not a armstrong number\n",original);
    return 0;
}