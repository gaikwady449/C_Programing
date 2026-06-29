// Accept number if row and number of column from user and display below pattern
// input : iRow=4 iCol=4
//    * * * * * *
//    *       * *
//    *     *   *
//    *    *    *
//    *  *      *
//    * * * * * *
# include <stdio.h>
void Pattern(int iRow,int iCol)
{
    int i =0;
    int j=0;
    
    for(i=1;i<=iRow;i++)
    {
        
        for(j=1;j<=iCol;j++)
        {
            if(j ==1 || j == iRow || i == iRow || i == 1 )
            {
                printf("*\t");
            }
            else if(i+j == 7)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
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