//
// Created by NBJ on 7/24/2025.
//
#include <stdio.h>
#include <stdbool.h>


int main() {
    long long minutes = 60LL * 24 * 739465LL;  // Use LL for large literals
    long long minutes_in_year = 60LL * 24 * 365;   // Should also be long long

    long long years = minutes / minutes_in_year;
    long long days = (minutes % minutes_in_year) / (60 * 24);

    printf("Minutes in a year: %lld\n", minutes_in_year);
    printf("Years: %lld years\n", years);
    printf("Days: %lld days\n", days);

    return 0;
}