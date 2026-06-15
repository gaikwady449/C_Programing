# include <stdio.h>
# include <stdlib.h>
int SumEven(int Arr[],int iSize)
{
    int iCnt=0,iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iSum=iSum + Arr[iCnt];
        }
    }
    return iSum;
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
 
    iRet=SumEven(Brr,iLength);
    printf("summation of Even number is %d\n",iRet);

    // step 5 : deallowacate the memory
    free(Brr);

    return 0;
}
