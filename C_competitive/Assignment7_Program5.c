// Write a program which returns diffrence between even factor and odd factor 

# include <stdio.h>
int DiffEvenOddFactorial(int iNo)
{
    int iCnt=0;
    int iMulEvenFact=1;
    int iMulOddFact=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iMulEvenFact=iMulEvenFact*iCnt;
        }
        else
        {
            iMulOddFact=iMulOddFact*iCnt;

        }
    }
    return (iMulEvenFact-iMulOddFact);  
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a number ");
    scanf("%d",&iValue);

    iRet=DiffEvenOddFactorial(iValue);

    printf("Diff bettween Factorial is %d",iRet);

   

    return 0;
}