# include <stdio.h>
int StrlenX(char * const str)
{
    int iCount=0;
    while(*str != '\0' )
    {
        iCount++;
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
    
    iRet=StrlenX(Arr);

    printf("length of string is %d:",iRet);
    return 0;
}
