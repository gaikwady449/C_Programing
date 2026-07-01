# include <stdio.h>
typedef unsigned int UINT;

// position 9 and 17 
int main()
{   
    UINT iMask=0x0000044;
    UINT iNo=0;
    UINT iResult=0;

    printf("Enter the number : \n");
    scanf("%d",&iNo);

    iResult=iNo ^ iMask;
    printf("Before: %d\n",iResult);

    return 0;
}