#include <stdio.h>
#include <string.h>
int main() 
{
    int hour, minute;
    char str[2];
    printf("\nEnter the time in 12 hour format(ex:3:00 AM):\n");
    scanf("%d:%d %s", &hour, &minute, &str);
    printf("\n%d:%d %s can be represented in 24-hour format as:\n", hour, minute, str);
    if ((hour >= 0 && hour < 12) && (minute >= 0 && minute < 60))
    {
        if (str[0] == 'A')
        {
        	printf("0%d:%d", hour, minute);
        }
        else
        {
            printf("%d:%d", hour + 12, minute);
        }
    }
    else if (hour == 12 && (minute >= 0 && minute < 60))
    {
        if (str[0] == 'A')
        {
            printf("0%d:%d", hour - 12, minute);
        }
        else
        {
            printf("%d:%d", hour, minute);
        }
    }
    return 0;
}
