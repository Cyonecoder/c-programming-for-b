//
// Created by NBJ on 7/24/2025.
//
#include <stdio.h>
#include <stdbool.h>


int main(void){
    int minutes = 60*24;
    int minutes_in_year= 60 *24*365;

    int years =minutes/minutes_in_year;
    int days =(minutes%minutes_in_year)/(60*24);
    printf("minutes in year %d \n",minutes_in_year);

printf("years is %d years\n",years);
    printf("days is %d days\n",days);

}