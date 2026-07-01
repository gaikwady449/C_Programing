// Accept number from user and count number of 1 in that binary
# include <stdio.h>

int main()
{
    int iNo=0,iCount=0,iDigit;
    printf("Enter number ");
    scanf("%d",&iNo);
    while(iNo !=0)
    {
        iDigit=iNo%2;
        if(iDigit == 1)
        {  
            iCount++;
        }
        iNo=iNo/2;
    }

    printf("Number of 1 in that number is : %d\n",iCount);
}