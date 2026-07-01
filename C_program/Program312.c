// Accept number from user and and check the 13 bit is on or off
# include <stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT  iNo=0;
    UINT  iMask=4096;
    UINT  iAns=0;

    printf("Enter number ");
    scanf("%d",&iNo);
    
    iAns=iNo & iMask;
    if(iAns == iMask)
    {
        printf("13rd bit is on:");
    }
    else
    {
        printf("13rd bit is off:");

    }
    return 0;
}