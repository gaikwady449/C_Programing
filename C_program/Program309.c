// Accept number from user and count number of 1 in that binary
# include <stdio.h>

int main()
{
    unsigned int  iNo=0;
    unsigned int  iMask=4;
    unsigned int iAns=0;

    printf("Enter number ");
    scanf("%d",&iNo);
    
    iAns=iNo & iMask;
    if(iAns == iMask)
    {
        printf("3rd bit is on:");
    }
    else
    {
        printf("3rd bit is off:");

    }
    return 0;
}