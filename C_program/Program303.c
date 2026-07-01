# include <stdio.h>

int main()
{
    int iNo=0,iDigit=0;

    printf("Enter number :");
    scanf("%d\n",&iNo);

    while(iNo !=0)
    {
        iDigit=iNo % 2;
        printf("%d",iDigit);
        iNo=iNo/2;
    }
    printf("\n");
}