
# include <stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(int iCnt=1;iCnt<=iNo; iCnt++)
    {
        printf("jay Ganesh\n");
    }
}
int main()
{
    int iValue=0;
    Display(iValue);

    printf("Enter the Frequency");
    scanf("%d",&iValue);
    return 0;
}