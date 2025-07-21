//
// Created by mohamed khassal on 21/7/2025.
//
/*
 * preprocessor directive is also include anything that start with #
 */
#include <stdio.h>

int main(int argv, char** argc){
   char str[100];
   int i ;
    printf("this section is about preprocessing\n");

    printf("enter a value:");
    scanf("%d %s", &i,str);
    printf("\nYou entred: %d %s\n",i,str);
    return 0;

}