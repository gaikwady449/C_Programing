

# include <stdio.h>
void Display(int iNo)
{

    // Filter
    if(iNo<0)
    {
        printf("Invalid Input\n");
        return 0;
    }
    int iCnt=0;
    for(int iCnt=1;iCnt<=iNo; iCnt++)
    {
        printf("jay Ganesh\n");
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Frequency");
    scanf("%d",&iValue);
    

    Display(iValue);

    return 0;
}