# include <stdio.h>
typedef unsigned int UINT;

UINT ToggelsBit(UINT iNo,UINT iPos)
{
    UINT iMask=0x1;
    UINT iResult=0;

    iMask=iMask << (iPos - 1);

    iResult =iNo ^ iMask;

    return iResult;

}
int main()
{   
    UINT iValue=0,iLocation=0;
    UINT iRet=0;
    
    printf("enter the number");
    scanf("%d",&iValue);

    printf("Enter the bit position");
    scanf("%d",&iLocation);

    iRet=ToggelsBit(iValue,iLocation);

    printf("Upadated number are : %d",iRet);


    return 0;
}