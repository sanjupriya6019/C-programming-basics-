/*
Algorithm:
start
Read a number from the user.
If the number is less than or equal to 1, it is not prime.
If divisible by any number , it is not prime number.
Otherwise, it is a prime number .
Print the result.
stop.
*/
#include <stdio.h>
int main(){
    int num,i,flag=1;
printf("enter the number:");
scanf("%d",&num);
if (num<=1){
    flag=0;
}
else{
    for(i=2;i<num;i++){
        if (num%i==0){
            flag=0;
            break;

        }
    }
}
  if(flag==1)
       printf("%d is a prime number\n",num);
  else
      printf("%d is not a prime number\n",num);
  return 0;

}
