// write a program which accepte String from user and display it inn Reversr order  
// input : "Marvellous
// output : suollevraM
# include <stdio.h>

void Reverse(char *str)
{
    char *Start=NULL;
    char *End=NULL;
    char Temp='\0';
    Start=str;
    while(*str != '\0')
    {
        str++;
    }
    str--;

    End=str;
    while(Start < End)
    {
        Temp=*Start;
        *Start=*End;
        *End=Temp;
        Start++;
        End--;
    }
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string:");
    scanf("%[^\n]s",arr);

    Reverse(arr);

    printf("Upadated String are %s:",arr);

    return 0;
}