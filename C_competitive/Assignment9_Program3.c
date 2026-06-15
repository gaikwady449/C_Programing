// Write a program which accept number from user and return  count of digit in 3 to 7

# include <stdio.h>

int  CountRange(int iNo)
{
    int iCount=0;
    int iCnt=0;
    while(iNo !=0)
    {
        iCnt=iNo % 10;
        if(iCnt <=3 || iCnt>=7)
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

    iRet=CountRange(iValue);
    printf(" count the range in between 3 t 7 :%d \n",iRet);
    return 0;
}