//
// Created by mohamed khassal on 24/7/2025.
//

#include "stdio.h"

double  perimeterfunc (double *height , double *width){

    return  (*height+*width)*2;

}
double  areafunc (double *height , double *width){

    return  ((*height)*(*width));

}



int main(void){
double height = 5;
double width= 3;
double area = 0;
double perimeter = 0;
perimeter = perimeterfunc(&height,&width);
area = areafunc(&height,&width);
printf("area %.2f\n",area);

    printf("perimeter %.2f\n",perimeter);


}