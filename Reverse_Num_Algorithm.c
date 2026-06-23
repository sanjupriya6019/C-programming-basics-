#include<stdio.h>
int main(){
    // step1: Declare variables
    int num,reverse=0,rem;
    //Step2: Read input from the users
    printf("enter the number:");
    scanf("%d",&num);
    // Step3: Repeat until num becomes 0 
    while (num !=0){
        //step4: Extrac the last digit to reverse
        rem =  num%10;
        //Step5:Append the digit to reverse
        reverse= reverse*10+rem;
        //step6:Remove the last digit 
        num=num/10;
    }
    //step7:Display the reverse number
     printf("Reversed number=%d\n",reverse);
     // End the program
     return 0;

}
/*Algorithm:
1. Start
2. Declare variables num , reverse,rem
3. Read the number from the user
4. Repeat until num becomes 0
5. Extract the last digit using rem = num%10
6. Append the digit to reverse using reverse= reverse*10+rem
7. Remove the last digit using num=num/10
8. Print the reverse number
9. stop
##Time Complexity
.0(n), Where n is the number of digits in the input number.
Space Complexity
.0(1), Constant space is used for variables.
*/