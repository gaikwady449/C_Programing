# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

// time complexicity o(N)
bool LinearSearch(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {  
            break;
   
        }
    }
    if(iCnt==iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int *Brr=NULL;
    bool bRet=false;

    int iLength=0,iCnt=0,iValue=0;

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

    printf("Enter the element that you want to search:");
    scanf("%d",&iValue);
 
    bRet=LinearSearch(Brr,iLength,iValue);
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
