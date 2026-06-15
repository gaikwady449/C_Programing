# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
bool LinearSearch(int Arr[],int iSize)
{
    int iCnt=0;
    bool bFlag=false;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==11 )
        {
            bFlag = true;
            break;
   
        }
    }
    return bFlag ;
}
int main()
{
    int *Brr=NULL;
    bool bRet=false;

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
 
    bRet=LinearSearch(Brr,iLength);
    if(bRet== true)
    {
        printf(" Element is present");
    }
    else
    {
        printf("Element is not present");

    }

    // step 5 : deallowacste the memory

    free(Brr);

    return 0;
}
