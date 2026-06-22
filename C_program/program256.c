# include <stdio.h>
int CountCapital(const char *str)
{
    int iCount=0;
    char ch ='\0';

    while(*str != '\0' )
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;

}
int main()
{
    int iRet=0;
    char Arr[50]={'\0'};

    printf("Entre string :\n");
    scanf("%[^'\n]s",Arr);    
    
    iRet=CountCapital(Arr);

    printf("Frequency of a is  %d:",iRet);
    return 0;
}
