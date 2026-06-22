# include <stdio.h>
void StrlenX(char *str)
{
    *str='A';

}
int main()
{
    int iRet=0;
    char Arr[50]={'\0'};

    printf("Entre string :\n");
    scanf("%[^'\n]s",Arr);    
    StrlenX(Arr);

    printf("length of string is : %s\n",Arr);
    return 0;
}
