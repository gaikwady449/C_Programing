# include <stdio.h>  
# include <stdlib.h>
void Display(int Arr[],int iSize)
{
    printf("Elements the Array are");
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}
int main()
{
    int *Brr=NULL;

    int iLength=0,iCnt=0;

    printf("Enter the number of elements \n");
    scanf("%d",&iLength);
    // Aallocate the memory
    Brr=(int *)malloc(iLength*sizeof(int));
    // Accept the value from user
    printf("Enter the elements");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    // step 4 use the memory (Logic)

    Display(Brr,iLength);

    // step 5 : deallowacste the memory

    free(Brr);

    return 0;

  
}

