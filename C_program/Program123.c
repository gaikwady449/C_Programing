# include <stdio.h>
# include <stdlib.h>
int Summation(int Arr[],int iSize)
{
    int iCnt=0,iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return iSum;

}

int main()
{
    int *Brr=NULL;
    int iLength=0,iCnt=0;

    printf("Enter thr number of elements :");
    scanf("%d",&iLength);

    Brr=(int *)malloc(sizeof(int)*iLength);
    printf("Enter The elemets:");
    scanf("%d",&iLength);

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    int iRet=0;
    iRet=Summation(Brr,iLength);

    printf("Summation of element is :%d",&iRet);



    return 0;
}