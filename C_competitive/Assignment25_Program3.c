// Accept number if row and number of column from user and display below pattern
// input : iRow=4 iCol=4
//     a b c d e
//     1 2 3 4 5 
//     a b c d e
//     1 2 3 4 5 
# include <stdio.h>
void Pattern(int iRow,int iCol)
{
    int i =0;
    int j=0;
    char ch ='\0';
    for(i=1;i<=iRow;i++)
    {
        if(i % 2 != 0)
        {
            ch='a';
            for(j=1;j<=iCol;j++)
            {
                printf("%c\t",ch);
                ch++;
            }
        }
        else
        {
            int Odd=1;
            for(j=1;j<=iCol;j++)
            {
                printf("%d\t",Odd);
                Odd;
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