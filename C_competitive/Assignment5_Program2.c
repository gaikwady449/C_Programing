//Write a program Which accept numbers from user and 
// and print till that number
# include <stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d",iCnt);
    }

}
int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;

}