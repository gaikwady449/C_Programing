// Accept number of rows and number of coulumn from user and display
// below pattren 

// input = iRow = 3 iCol=5
// output  * # * #
//         * # * #
//         * # * #
# include <stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;i++)    
        {
            if(j % 2 ==0)
            {
                printf(" #\t");
            }
            else
            {
                printf("*\t");
            }
        

        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2;

    printf("Enter the Number of Row  :");
    scanf("%d",&iValue1);

    printf("Enter the Number of col  :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;

}