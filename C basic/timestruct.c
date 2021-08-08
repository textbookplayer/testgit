#include <stdio.h>
#include <conio.h>

typedef struct{
    int hour;
    int minute;
    int sec;
} TIME, *PTIME;

void importTime(PTIME time);
void displayTime(PTIME time);
TIME caculateTime(TIME time1, TIME time2);

void main(){
    TIME t1, t2, time;
    importTime(&t1);
    displayTime(&t1);
    importTime(&t2);
    displayTime(&t2);
    printf("TIME 1 - TIME 2 = ");
    time = caculateTime(t1, t2);
    displayTime(&time);
}

void importTime(PTIME time){
    int h,m,s;
    printf("\nImport Time: ");
    do
    {
        /* code */
        printf("\nHour: ");
        scanf("%d", &h);
    } while (h<0 || h >23);
    do
    {
        /* code */
        printf("\nMinute: ");
        scanf("%d", &m);
    } while (m<0 || h >59);
    do
    {
        /* code */
        printf("\nSec: ");
        scanf("%d", &s);
    } while (s<0 || s >59);
    time->hour = h;
    time->minute = m;
    time->sec = s; 
}

void displayTime(PTIME time){
    printf("hh::mm::ss : %.2d - %.2d - %.2d\n", time->hour, time->minute, time->sec);
}

TIME caculateTime(TIME time1, TIME time2){
    int s1= 0, s2= 0;
    int s;
    TIME time;
    s1 = 60*60*time1.hour + 60*time1.minute + time1.sec;
    s2 = 60*60*time2.hour + 60*time2.minute + time2.sec;
    s = s1 - s2;
    if(s < 0)
    {
        s = (-1)*s;
    }
    time.minute = s/60;
    time.sec = s%60;
    time.hour = time.minute/60;
    time.minute = time.minute%60;
 
    return time;

}