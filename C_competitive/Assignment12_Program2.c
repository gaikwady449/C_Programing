// Write a progtram which Accept number from user ans
// and check whther it contain zero in it or not 
# include <stdio.h>
# include <stdbool.h>

# define TRUE 1
# define FALSE 0
bool ChkZero(int iNo)
{
    int iDigit=0;
    if(iNo < 0)
    {
        iNo=-iNo;

    }
    while(iNo> 0)
    {
        iDigit=iNo%10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo=iNo/10;
    }

}
int main()
{
    int iValue=0;
    bool bRet=FALSE;

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("it contain zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}