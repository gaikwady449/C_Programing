

# include <stdio.h>
void Display(int iNo)
{

    // Filter
    if(iNo<0)
    {
        printf("Invalid Input\n");
        return ;
    }
    int iCnt=0;
    for(int iCnt=1;iCnt<=iNo; iCnt++)
    {
        printf("%d jay Ganesh\n",iCnt);
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