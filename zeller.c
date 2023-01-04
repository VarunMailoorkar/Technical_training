#include<stdio.h>
#include<math.h>
#include<time.h>
#include<locale.h>
#include<stdlib.h>


void showdatesanddays(void);
int zellergregorian(struct tm* date);


int main(void)
{
    puts("-----------------------");
    puts("| codedrome.com       |");
    puts("| Zeller's Congruence |");
    puts("-----------------------\n");

    showdatesanddays();

    return EXIT_SUCCESS;
}


void showdatesanddays()
{

    char* daynames[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    char datestring[64];
    char daystring[10];
    struct tm date = {};
    int h;

    srand(time(NULL));


    for(int i = 0; i < 20; i++)
    {
        date.tm_year = (rand() % 2017) - 1900; // in tm, the year is based on 1900
        date.tm_mon = rand() % 11;
        date.tm_mday = rand() % 365; // mktime will sort out tm_mday, eg 32 January becomes 1 February


        mktime(&date);

        strftime(datestring, 64, "%d %B %Y", &date);
        strftime(daystring, 10, "%A", &date);
        h = zellergregorian(&date);

        printf("Date %s\n", datestring);
        printf("Day (C library) %s\n", daystring);
        printf("Day (Zeller) %s\n\n", daynames[h]);
int zellergregorian(struct tm* pdate)
{
    int h = 0;

    int q = pdate->tm_mday;
    int m = pdate->tm_mon;
    int Y = 1900 + pdate->tm_year;


    if(m <= 1)
        m+= 13;
    else
        m+= 1;


    if(pdate->tm_mon <= 1)
        Y--;



    h = (q + ((13 * (m + 1)) / 5) + Y + (Y / 4) - (Y / 100) + (Y / 400)) % 7;

    return h;
}
    }
}
