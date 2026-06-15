// Write a Program which accept one number from user and 
//print that number of Even NUmbers on Screen

# include <stdio.h>
void PrintEven(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d",iCnt);
        }
    }

}
int main()
{
    int iValue=0;

    printf("ENter a Number");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}