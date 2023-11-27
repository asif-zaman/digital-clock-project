#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
#include<conio.h>


int main()
{
    int hour = 12;
    int minute = 35;
    int second = 0;

    while(1){
        system("COLOR 0C");
        system("cls");

       printf("\n\n\n\t\t ______________\n");
       printf("\t\t| %02d : %02d : %02d |",hour,minute,second);
       printf("\n\t\t --------------\t\t\t\n\n\n\n");

        fflush(stdout);
        second++;
        if(second == 60){
            minute = minute+1;
            second = 0;
        }
        if(minute == 60){
            hour = hour+1;
            minute = 0;
        }
        if(hour == 24){
            hour = 0;
            minute = 0;
            second = 0;
        }

        sleep(1);

    }
    return 0;
}
