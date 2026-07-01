# include <stdio.h>
typedef unsigned int UINT;
// position 13
UINT OffBit(UINT iNo,UINT iPos)
{
    UINT iMask=0xFFBFFFF;
    UINT iResult=0;

    iMask=iMask << (iPos - 1);
    if(iPos <1 || iPos >32)
    {
        printf("INVALID BIT POSITION");
        return iNo;
    }

    iResult =iNo & iMask;

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
    
    iRet=OffBit(iValue,iLocation);

    printf("Upadated number are : %d",iRet);


    return 0;
}