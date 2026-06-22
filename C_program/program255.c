# include <stdio.h>
int CountSmall(const char *str)
{
    int iCount=0;
    char ch ='\0';

    while(*str != '\0' )
    {
        if(*str >= 'a' && *str <= 'z')
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
    
    iRet=CountSmall(Arr);

    printf("Frequency of a is  %d:",iRet);
    return 0;
}
