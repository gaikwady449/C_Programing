// Accept N number from user and return 
// all such Element which  are divisible by 3 and 5
//  n:  6
// 85 66 3 15 93 88 
// output : 15
# include <stdio.h>
# include <stdlib.h>


void Display(int Arr[],int iLength)
{
    int iCnt =0;
  

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%3 ==0 && Arr[iCnt]%5==0)
        {
            printf("number is divisible by 3 and 5 %d:",Arr[iCnt]);
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