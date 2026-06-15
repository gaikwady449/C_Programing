// Write a program which accept number from user and return  multiplication of all digit

# include <stdio.h>

int  MulDigit(int iNo)
{
    int iMul=1;
    int iCnt=0;
    while(iNo !=0)
    {
        iCnt=iNo % 10;

        iMul=iMul * iCnt;
 
        iNo=iNo/10;
        
    }
    return iMul;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number ");
    scanf("%d",&iValue);

    iRet=MulDigit(iValue);
    printf(" Multiplication of digit is :%d \n",iRet);
    return 0;
}