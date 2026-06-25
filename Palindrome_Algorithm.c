#include<stdio.h>
int main(){
    //step1:DEclare the variables
    int num,reverse=0,rem,original;
    //step2:Read the inputfrom the use
    printf("Enter the number:");
    scanf("%d",&num);
    //step3:Store the original number
    original=num;
    //step4:Reverse the number
    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    //step5:Check if the original number is equal to the reversed number
    if(original==reverse){
        printf("The number is a palindrome.");
    }
    else{
        printf("The number is not a palindrome.");
    }
    return 0;
}
/*
Algorithm
  Step1:start
  Step2: Declare variables num,original,reverse,rem
  Step3: Read the number from the user 
  Step4: Store the original number in original 
  Step5: Repeat until num become 0
          a)Find the last digit digit using rem=num%10
          b)Build the reverse number using reverse = reverse 10+rem
          c)Remove the last digit using num = num /10
  Step6: Compare original and reverse 
  Step7: If both are equal, print "Polindrome Number "
  Step8: Otherwise, print "Not a Polindrome Number"
  Step9: Stop

# Time Complexity:
0(n)
Where n is the number of digits in the input number
# Space Complexity:
0(1)
  */