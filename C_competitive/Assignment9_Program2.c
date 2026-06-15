// Write a program which accept number from user and return  count of e=odd digits 

# include <stdio.h>

int  CountOdd(int iNo)
{
    int iCount=0;
    int iCnt=0;
    while(iNo !=0)
    {
        iCnt=iNo % 10;
        if(iCnt % 2 !=0)
        {
            iCount++;
        }
        iNo=iNo/10;
        
    }
    return iCount;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number ");
    scanf("%d",&iValue);

    iRet=CountOdd(iValue);
    printf(" count of odd number is  :%d \n",iRet);
    return 0;
}