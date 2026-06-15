// Write a program which accept number  from user print even  factorial of given number



# include <stdio.h>
int OddFactorial(int iNo)
{
    int iCnt=0;
    int iMulFact=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iMulFact=iMulFact*iCnt;
        }
    }
    return iMulFact;  
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a number ");
    scanf("%d",&iValue);

    iRet=OddFactorial(iValue);

    printf("od Factorial is %d",iRet);

   

    return 0;
}