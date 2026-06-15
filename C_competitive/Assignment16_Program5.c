// Accept N number from user and display the sum 
// of that digits 
# include <stdio.h>
# include <stdlib.h>


void  DigitsSum(int Arr[],int iLength)
{
    int iCnt =0;
    int iDigit=0;
    int iNo=0;
    int iSum=0;
  


    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        int iSum=0;
        iNo=Arr[iCnt];
        while(iNo >0)
        {
            iDigit=iNo % 10;
            iSum=iSum + iDigit;  
            iNo=iNo / 10;
        }

        printf("Sum of digits of %d = %d\n", Arr[iCnt], iSum);
    }
    

}
int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *p=NULL;

    printf("Enter the number of element:");
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
    DigitsSum(p,iSize);
    free(p);

    return 0;
}