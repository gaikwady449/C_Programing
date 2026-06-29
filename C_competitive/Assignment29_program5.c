// Accept division of student from user and depends on the division 
// display exam timing . there are 4 division in school as A,B,C,D exam
// of division A at 7 AM B at 8:30 AM , c At 9.20 AM and D at 10.30 Am
// (Application should be case insensitive )
// Input : C
// output : Your exam at 9.20 AM
// input : d
// output : Your Exam at 10.30 AM

# include <stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')     
    {
        printf("YOUR exam time is 7 AM");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("YOUR exam time is 8:30 AM");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("YOUR exam time is 9:20 AM");
    }
    else
    {
        printf("YOUR exam time is 10:30 AM");
    }
    
}
int main()
{
    char cValue='\0';

    printf("Enter the charecter:");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    return 0;
}