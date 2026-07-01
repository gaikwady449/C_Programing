# include <stdio.h>
typedef unsigned int UINT;

// position 3 and 8
int main()
{   
    UINT iMask1=0x0000004;
    UINT iMask2=0x0000080;
    UINT iMask=0;
    iMask=iMask1 | iMask2;
    UINT iNo=0;
    UINT iResult=0;

    printf("Enter the number : \n");
    scanf("%d",&iNo);

    iResult=iNo ^ iMask;
    printf("Before: %d\n",iResult);

    return 0;
}