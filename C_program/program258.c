# include <stdio.h>
int CountUpadate( char *str)
{

    while(*str != '\0' )
    {
        if(*str == 'L')
        {
            *str='-';
            
        }
        str++;
    }
    printf("String is :%d\n",str);
}
int main()
{
    char Arr[50]={'\0'};

    printf("Entre string :\n");
    scanf("%[^'\n]s",Arr); 
    
    CountUpadate(Arr);

    return 0;
}
