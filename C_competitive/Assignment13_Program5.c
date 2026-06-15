// Accept N number from user and return 
// all such Element which  are multiple of 11
//  n:  6
// 85 66 3 15 93 88 
// output : 88 66 
# include <stdio.h>
# include <stdlib.h>


void Display(int Arr[],int iLength)
{
    int iCnt =0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] % 11 == 0)
        {
            printf(" %d:",Arr[iCnt]);      
        }
    }
}
int main()
{
    int iSize=0,iCnt=0;
    
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
    Display(p,iSize);

    return 0;
}