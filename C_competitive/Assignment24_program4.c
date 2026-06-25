
// Accept number if row and number of column from user and display below pattern
// input : iRow=3 iCol=4
//     4 4 4 4 4 
//     3 3 3 3 3
//     2 2 2 2 2
//     1 1 1 1 1
# include <stdio.h>
void Pattern(int iRow,int iCol)
{
    int i =0;
    int j=0;
    int iCount=0;
    for(i=1,iCount=iRow;i<=iRow;i++,iCount--)
    {
        for(j=0;j<=iCol;j++)    
        {
            printf("%d\t",iCount); 
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