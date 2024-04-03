#include <stdio.h>

int main()
{
    int hour, min;
    scanf("%d %d", &hour, &min);
    
    int time;
    scanf("%d", &time);
    
    min=min+time;
    
    if(min>=60)
    {
        hour=hour+(min/60);
        min=min%60;
    }
    if(hour>=24)
    {
        hour=hour-24;
    }
    printf("%d %d", hour, min);
}