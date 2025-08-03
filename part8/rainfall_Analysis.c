//
// Created by NBJ on 8/3/2025.
//

#include <stdio.h>

int main() {
    float total_year[5]={0};
    float avg_months[12]={0};
    float arrPrime[5][12]={
        {1.,5.,4.,7.,8.,3.,3.,6.,9.,9.,10.,12.},
        {3.,11.,4.,7,3,3,3,6,6,9.,10.,6.},
        {2,5,4,7,8,3.,6,5,9,4,6,12},
        {3,5,4,7,8,3,3,3,9,2,10,6},
        {5,5,4,7,8,6,5,11,9,9,10,3}};
    for (int i = 0; i < 5; i++) {
      float  totalforyear=0.0;
         for (int j = 0; j < 12; j++) {
              totalforyear += arrPrime[i][j];

         }
        total_year[i] = totalforyear;

    }

float totalYears=0.0 ;
    for (int i = 0; i < 5; i++) {
        int year =2020+i;

         totalYears += total_year[i];
         printf("year  %i rainfall total %f\n", year, total_year[i]);

    }
    printf("the yearly total %f\n", totalYears/5);

    for (int i = 0; i < 12; i++) {

       for (int j = 0; j < 5; j++) {
          avg_months[i] += arrPrime[j][i]/5;

       }

    }
    printf("the total monthly total %f\n", avg_months[0]);


}
