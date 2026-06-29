// write a program which accept string from user and return 
// diffrence between frequency of small charecter and frequency of capital charecter
// input : "Marvellous Multi OS"
// output : 6 (8-2)
# include <stdio.h>
int CountSmall(char *str)
{
    int iCnt=0;
    int iCountSmall=0;
    int iCountCapital=0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <='z')
        {
            iCountSmall++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        str++;
    }
    return (iCountSmall - iCountCapital);
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string");
    scanf("%[^\n]s",arr);

    iRet=CountSmall(arr);

    printf("%d",iRet);
    return 0;

}