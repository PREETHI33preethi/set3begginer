#include <stdio.h>

int main()
{
    int minute,hour,hour1,minute1;
    scanf("%d%d%d%d",&minute,&hour,&minute1,&hour1);
    if(hour>hour1)
    {
         hour=hour-hour1;
    }
    else
    {
        hour=hour1-hour;
    }
    if(minute>minute1)
    {
         minute=minute-minute1;
    }
    else
    {
        minute=minute1-minute;
    }
    printf("%d %d",hour,minute);
    return 0;
}
