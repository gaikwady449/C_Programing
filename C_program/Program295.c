# include <stdio.h>
void StrRevX(char *str)
{
    char *start=NULL;
    char *End=NULL;

    start=str;

    while(*str !='\0')
    {
        str++;
    }
    str--;

    while(start <= str)
    {
        printf("%s\n",*str);
        str--;
    }
    printf("\n");

}
int main()
{

    char Arr[50]={'\0'};
    printf("enter String \n");
    scanf("%[^'\n']s",Arr);

    StrRev(Arr);
    return 0;
}