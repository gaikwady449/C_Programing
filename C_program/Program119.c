# include <stdio.h>    // error due to stdlib.h
int main()
{
    int *Brr=NULL;

    int iLength=0,iCnt=0;

    printf("Enter the number of elements ");
    scanf("%d",&iLength);
    // Aallocate the memory
    Brr=(int *)malloc(iLength*sizeof(int));
    // Accept the value from user

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    // step 4 use the memory (Logic)

    // step 5 : deallowacste the memory

    free(Brr);

    return 0;

  
}

