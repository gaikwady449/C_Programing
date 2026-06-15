// Accept N number from user and accept range display all element
// from that range
# include <stdio.h>
# include <stdlib.h>


void  DisplayRange(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt =0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] >=iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d", Arr[iCnt]);
        }
    }

}
    
int main()
{
    int iSize=0,iCnt=0,iValue1=0,iValue2=0;
    int *p=NULL;

    printf("Enter the number od element:");
    scanf("%d",&iSize);

    printf("Enter the starting point :");
    scanf("%d",&iValue1);

    printf("Enter the Ending point :");
    scanf("%d",&iValue2);

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

    DisplayRange(p,iSize,iValue1,iValue2);

    free(p);

    return 0;
}