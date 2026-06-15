//Write a program Which accept numbers from user and 
// and print all odd Numbers up to N
# include <stdio.h>
void OddDisplay(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }

}
int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    OddDisplay(iValue);


    return 0;

}