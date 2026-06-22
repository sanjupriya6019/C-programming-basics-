/*
## Prime Number Algorithm.
Problem Statement
    Write a c program to check whether a given number is prime or not.
#Algorithm 
    start
     Declare variables num, i, and flag=1.
       Read a number from the user.
        if num <=1, set flag=0.
    Otherwise, repeat from i = 2 to num - 1:
      If num% i==0, set flag =0.
         Exit the loop.
    If flag == 1, prime "Prime Number".
         Otherwise, print "Not a prime Number".
Stop.     
  Example 
    Input :13.
     Output: 13 is a Prime Number
## Time complexity 
  0(n)

 # Simple memory trick
    Prime number= No zero remainder (exceppt when divided by 1 and itself).
    Non-prime number= At least one zero remainder between 2 and n-1.

If(num%i==0)
{
    flag =0;
     break;
}
