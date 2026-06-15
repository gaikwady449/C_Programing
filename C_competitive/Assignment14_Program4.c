// Accept n number from user and 
// return number of Frequency of 11 in it  

# include <stdio.h>
# include <stdlib.h>


int  Frequency(int Arr[],int iLength)
{
    int iCnt=0;
    int iFreq=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFreq++;

        }
      
    }
    return iFreq;
}

int main()
{

    int iSize=0,iCnt=0,iRet=0,iValue=0;

    int *p=NULL;
    printf("Enter Number of Elemnts:");
    scanf("%d",&iSize);

   

    p=(int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allowcate memory");
        return -1;
    }
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    iRet=Frequency(p,iSize);
    printf("Number of Freq of 11 is :%d",iRet);

    free(p);

    return 0;
}