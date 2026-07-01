// Accept number from user and and check the 7 bit is on or off
# include <stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT  iNo=0;
    UINT  iMask=0x1;
    UINT  iAns=0;
    UINT  iPos=0;

    printf("Enter number ");
    scanf("%d",&iNo);

    printf("Enter the position");
    scanf("%d",&iPos);
    
    iMask=iMask << (iPos - 1);

    iAns=iNo & iMask;
    if(iAns == iMask)
    {
        printf(" bit is on:");
    }
    else
    {
        printf("bit is off:");

    }
    return 0;
}