// write a program which Accept range from user and display all numbers in between that range
// 22 25  
// 22 23 24 25
# include <stdio.h>
int RangeDisplay(int iStart,int iEnd)
{
    int iCnt=0;

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d\n",iCnt);
    }
    
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Sarting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);   

    RangeDisplay(iValue1,iValue2);

    return 0;
}