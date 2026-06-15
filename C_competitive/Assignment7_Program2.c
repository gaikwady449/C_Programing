// Write a program which accept amount  from user in us doller
// and return value in Indian ruppess 


# include <stdio.h>
int DollerTOINT(int iNo)
{
    int iCnt=0;
    iCnt=iNo*70;
    return iCnt;
    
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a number ");
    scanf("%d",&iValue);

    iRet=DollerTOINT(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}