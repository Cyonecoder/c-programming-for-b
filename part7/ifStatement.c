//
// Created by mohamed khassal on 29/7/2025.
//

#include <stdio.h>

int main (){



    int number_to_test,remainder;

    printf("Enter number to test \n");

    scanf("%i",&number_to_test);

    remainder = number_to_test%2;
    if(remainder ==0)
        printf("Number is even \n");
    else
        printf("Number is odd \n");
return 0;
}

