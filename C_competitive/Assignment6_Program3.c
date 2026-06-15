// Write a program to find factorial of number
// 

# include <stdio.h>
int Factorial(int iNo)
{
    int iCnt=0;
    int iMulFact=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iMulFact=iMulFact*iCnt;
    }
    return iMulFact;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a number ");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial of Number %d",iRet);

    return 0;
}