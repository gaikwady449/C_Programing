/*
start 
     Accept Number as No
    if No is completely divisible by 2 
       then Print Even
    otherwise Print Odd
stop

start
     Accept Number as No
     Divide No by 2 
     if Reminder is 0 
        then print as Even
    otherwise
         Print as Odd
stop
*/

# include <stdio.h>

int main()
{
    int iValue=0;
    int iRemainder=0;
    
    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRemainder=iValue%2;

    if(iRemainder==0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}