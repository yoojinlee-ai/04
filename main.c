#include <stdio.h>
#include <stdlib.h>

int main() {
    int year;

    printf("Input year :");
    scanf("%i", &year);  
    
    
    printf("If the year is %i leap year? %s\n", year,
        ( (year%4 == 0 && year%100 != 0) || (year%400 == 0) ) ? "Yes" : "No" );

    system("PAUSE");

    return 0;
}


