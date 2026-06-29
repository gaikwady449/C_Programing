// write a program which display ASCII table. Table contain symbol 
// Decimal ,Hexadecimal and octal representation of every member from( 0 to 255)
# include <stdio.h>
void DisplayASCII()
{
    printf("Dec\tHex\tOct\tChar\n");
    printf("-------------------------------------------------------\n");
    int iCnt=0;
    for(iCnt=0;iCnt<=255;iCnt++)
    {
        printf("%d\t%X\t%o\t%c\n",iCnt,iCnt,iCnt,(char)iCnt);
    }
}
int main()
{
    DisplayASCII();
    return 0;
}