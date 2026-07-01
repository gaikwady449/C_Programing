# include <stdio.h>
typedef unsigned int UINT;
UINT Toggle(UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT iMask1=0x1;
    UINT iMask2=0x1;
    UINT iMask=0;

    UINT iResult =0;

    iMask1=iMask1<< (iPos1-1);
    iMask1=iMask2<< (iPos1-1);

    iMask=iMask1 | iMask2;

    iResult=iNo ^ iMask;

    return iResult;
}
int main()
{
    UINT iValue=0;
    UINT iLocation1=0,iLocation2=0,iRet=0;
    

    printf("Enter number :\n");
    scanf("%d",&iValue);

    printf("Enter first bit position");
    scanf("%d",&iLocation1);

    printf("Enter first bit position");
    scanf("%d",&iLocation2);

    iRet=Toggle(iValue,iLocation1,iLocation2);

    printf("UPADATED NUMBER:%d\n",iRet);
}
