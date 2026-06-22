# include <stdio.h>
int CountSpace(const char *str)
{
    int iCount=0;
    char ch ='\0';

    while(*str != '\0' )
    {
        if(*str == ' ')
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
    
    iRet=CountSpace(Arr);

    printf("Frequency of Space  is  %d:",iRet);
    return 0;
}
