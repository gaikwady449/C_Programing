// Accept n number from user and Return Frequency of even numbers



# include <stdio.h>
# include <stdlib.h>
int CountEven(int Arr[],int iLength)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=1;iCnt<=iLength;iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iSum++;
        }
    }
    return iSum;
}

int main()
{

    int iSize=0,iRet=0,iCnt=0;

    int *p=NULL;
    printf("Enter Number of Elemnts:");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allowcate memory");
        return -1;
    }
    for(iCnt=0;iCnt<=iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet=CountEven(p,iSize);
    printf("REsult is %d",iRet);

    free(p);

    return 0;
}