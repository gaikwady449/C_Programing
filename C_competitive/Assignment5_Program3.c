//Write a program Which accept numbers from user and 
// and print till that number
# include <stdio.h>
void OddDisplay(int iNo)
{
    int iCnt=0;
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d",iCnt);
    }

}
int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    OodDisplay(iValue);


    return 0;

}