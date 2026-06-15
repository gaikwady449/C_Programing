// Accept N number from user and accept one another number as No 
// return index of last  occurrence of that NO
# include <stdio.h>
# include <stdlib.h>


int  FirstOcc(int Arr[],int iLength,int iNo)
{
    int iCnt=0;

    int iLastInd=-1;
    for(iCnt=0;iCnt<=iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iLastInd=iCnt;
        }
    }
    return iLastInd;
}
int main()
{
    int iSize=0,iCnt=0,iValue=0;
    int iRet=0;
    int *p=NULL;

    printf("Enter the number od element:");
    scanf("%d",&iSize);

    printf("Enter the number:");
    scanf("%d",&iValue);

    p=(int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter  the element");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet=FirstOcc(p,iSize,iValue);

    if(iRet==-1)
    {
        printf("Thre is no such Number");
    }
    else
    {
        printf("First occurrence of number is %d ",iRet);
    }

    free(p);

    return 0;
}