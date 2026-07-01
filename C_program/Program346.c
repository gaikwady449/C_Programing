# include <stdio.h>
typedef unsigned int UINT;

// position 21 and 27 
int main()
{   
    UINT iMask=0x0410000;
    UINT iNo=0;
    UINT iResult=0;

    printf("Enter the number : \n");
    scanf("%d",&iNo);

    iResult=iNo ^ iMask;
    printf("Before: %d\n",iResult);

    return 0;
}