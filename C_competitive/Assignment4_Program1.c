// Write a program which Accept number ffrom user and 
// display its multiplication of factor 

# include <stdio.h>
int MulFact(int iNo)
{
    int iProduct=1;
    int iCnt=0;
    
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo % iCnt== 0)
        {
            iProduct=iProduct*iCnt;
            
        }
    }
    return iProduct;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter a number");
    scanf("%d",&iValue);

    iRet=MulFact(iValue);

    printf("%d",iRet);

    return 0;
}