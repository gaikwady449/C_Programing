// Accept N number from user and return diffrence Between Suummation 
// of even element and summation of odd element
//  n:  6
// 85 66 3 80 93 88 
// output : 53 (234 - 181)
# include <stdio.h>
# include <stdlib.h>


int Difference(int Arr[],int iLength)
{
    int iCnt =0;
    int iESum=0;
    int iOSum=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2 ==0)
        {
            iESum=iESum+Arr[iCnt];
        }
        else
        {
            iOSum=iOSum+Arr[iCnt];
        }
    }
    return iESum-iOSum;
}
int main()
{
    int iSize=0,iRet=0,iCnt=0;
    
    int *p =NULL;

    printf("Enter number of element:");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allowacate memory ");
        return -1;
    }
    printf("Enter elements :");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    iRet=Difference(p,iSize);
    printf("Diffrence between Even number and odd Number:%d",iRet);


}