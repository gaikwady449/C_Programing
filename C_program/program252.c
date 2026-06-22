# include <stdio.h>
int CountVowels(const char *str)
{
    int iCount=0;
    while(*str != '\0' )
    {
        if(*str == 'a' || *str == 'e' ||  *str == 'i' || *str == 'o' || *str == 'u')
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
    
    iRet=CountVowels(Arr);

    printf("Frequency of a is  %d:",iRet);
    return 0;
}
