
// Accept number if row and number of column from user and display below pattern
// input : iRow=3 iCol=4
//     A A A A A 
//     B B B B B 
//     C C C C C 
# include <stdio.h>
void Pattern(int iRow,int iCol)
{
    int i =0;
    int j=0;
    char ch='\0'; 
      
    for(i=1,ch='A';i<=iRow;i++,ch++)
    {
        for(j=0;j<iCol;j++)    
        {
            printf("%c\t",ch); 
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