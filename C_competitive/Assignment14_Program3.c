// Accept n number from user and 
// check whether that number contains 11 in it or not 

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
            
        }
        return FALSE;
    }
}

int main()
{

    int iSize=0,iCnt=0;
    bool bRet=FALSE;

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

    bRet=Check(p,iSize);
    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf(" 11 is not present");

    }

    free(p);

    return 0;
}