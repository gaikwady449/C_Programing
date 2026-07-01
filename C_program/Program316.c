// Accept number from user and and check the 7 bit is on or off
# include <stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT  iNo=0;
    UINT  iMask=0x40;
    UINT  iAns=0;

    printf("Enter number ");
    scanf("%d",&iNo);
    
    iAns=iNo & iMask;
    if(iAns == iMask)
    {
        printf("7rd bit is on:");
    }
    else
    {
        printf("rd bit is off:");

    }
    return 0;
}