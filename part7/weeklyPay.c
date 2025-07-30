//
// Created by mohamed khassal on 29/7/2025.
//

#include <stdio.h>

#define basic_hour_rate  12.0
#define taxes15  15.0/100
#define taxes20  20.0/100
#define taxes25  25.0/100
int main(){


    int weekly_worked_hours=0;
    double gross_pay,net_pay =0.0;



    printf("Enter your weekly worked Hours:\n");

    scanf("%i",&weekly_worked_hours);
    printf("Your weekly worked Hours: %i \n",weekly_worked_hours);

    if(weekly_worked_hours<=40){
        gross_pay= weekly_worked_hours* basic_hour_rate;

    }else{
        gross_pay=((40*basic_hour_rate)+((weekly_worked_hours-40)*basic_hour_rate*1.5));

    }

    printf("Your weekly gross pays is: %.2f $\n",gross_pay);

   net_pay= gross_pay-(gross_pay<=300? gross_pay*taxes15:300*taxes15)-((gross_pay-300<=150)?gross_pay-300*taxes20:150*taxes20)-((gross_pay-450)>0?(gross_pay-450)*taxes25:0);

    printf("Your weekly net pays is: %.2f $\n",net_pay);

    return 0;


}
