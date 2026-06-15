// Write a program which accept number from user and return diff rence between summation of sum and odd digits 

# include <stdio.h>

int  CountDiff(int iNo)
{
    int iSum=0;
    int iOdd=0;
    int iCnt=0;
    while(iNo !=0)
    {
        iCnt=iNo % 10;
        if(iCnt % 2 ==0)
        {
            iSum=iSum+iCnt;
        }
        else
        {
            iOdd=iOdd+iCnt;

        }
        iNo=iNo/10;
        
    }
    return iSum-iOdd;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number ");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);
    printf(" count of Difference   :%d \n",iRet);
    return 0;
}