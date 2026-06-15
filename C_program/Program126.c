# include <stdio.h>
# include <stdlib.h>
int CountOdd(int Arr[],int iSize)
{
    int iCnt=0,iCount=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2 != 0)
        {
            iCount++;
        }
    }
    return iCount;

}
int main()
{
    int *Brr=NULL;
    int iRet=0;

    int iLength=0,iCnt=0;

    printf("Enter the number of elements \n");
    scanf("%d",&iLength);
    // Aallocate the memory
    Brr=(int *)malloc(iLength*sizeof(int));
    // Accept the value from user
    printf("Enter the elements\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    // step 4 use the memory (Logic)
 
    iRet=CountOdd(Brr,iLength);
    printf("Count of Odd number is %d\n",iRet);

    // step 5 : deallowacste the memory

    free(Brr);

    return 0;

  
}
