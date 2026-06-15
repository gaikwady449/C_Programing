// Accept N number from user and return the diffrence between 
// smallest and largest number
# include <stdio.h>
# include <stdlib.h>


int  Diffrence(int Arr[],int iLength)
{
    int iCnt =0;
    int iMin=0;
    int iMax=0;
    iMax=Arr[0];
    iMin=Arr[0];

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax-iMin;
}
int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *p=NULL;

    printf("Enter the number od element:");
    scanf("%d",&iSize);


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

    iRet=Diffrence(p,iSize);

    printf("Largest number is  %d",iRet);

    free(p);

    return 0;
}