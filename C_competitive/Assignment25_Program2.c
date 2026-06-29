
// Accept number if row and number of column from user and display below pattern
// input : iRow=4 iCol=4
//     2 4 6 8 10
//     1 3 5 7 9
//     2 4 6 8 10
//     1 3 5 7 9
# include <stdio.h>
void Pattern(int iRow,int iCol)
{
    int i =0;
    int j=0;
    for(i=1;i<=iRow;i++)
    {
        if(i % 2 != 0)
        {
            int iEven=2;
            for(j=1;j<=iCol;j++)
            {
                printf("%d\t",iEven);
                iEven=iEven+2;
            }
        }
        else
        {
            int Odd=1;
            for(j=1;j<=iCol;j++)
            {
                printf("%d\t",Odd);
                Odd=Odd+2;
            }
        }
    

        printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter the number of Row:");
    scanf("%d",&iValue1);

    printf("Enter the number of Row:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;


}