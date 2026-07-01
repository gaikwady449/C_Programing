# include <stdio.h>
typedef unsigned int UINT;
// position 4
int main()
{   
    UINT iMask=0x0;
    UINT iNo=0;

    printf("enter the number");
    scanf("%d",&iNo);

    iMask=0x00000008;

    iNo=iNo ^ iMask;

    printf("Upadated number : %d\n",iNo);


    return 0;
}